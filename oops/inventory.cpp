//Cost finding function is not correct
#include<bits/stdc++.h>
using namespace std;

//unordered_map <string, unordered_map<string, int>> INVENTORY; 
//INVENTORY["ARGENTINA"].insert(make_pair(""))

class Inventory{
    string country;
    int ipod_count, iphn_count, ipod_price, iphn_price;
    int iphn_order = 0;
    int ipod_order = 0;
    public:
        Inventory(string country){
            this->country = country;
            if(country.compare("ARGENTINA") == 0){
                this->ipod_count = 100;
                this->ipod_price = 100;
                this->iphn_count = 50;
                this->iphn_price = 150;
            }
            else if(country.compare("BRAZIL") == 0){
                this->ipod_count = 100;
                this->ipod_price = 65;
                this->iphn_count = 100;
                this->iphn_price = 100;
            }
        }  

        void set_iphn_order(int iphn_order){
            this->iphn_order = iphn_order;
            this->iphn_count -= iphn_order;
        }

        void set_ipod_order(int ipod_order){
            this->ipod_order = ipod_order;
            this->ipod_count -= ipod_order;
        }

        int get_ipod_count(){ return this->ipod_count;}
        int get_iphn_count(){ return this->iphn_count;}
        int get_ipod_price(){ return this->ipod_price;}
        int get_iphn_price(){ return this->iphn_price;}
        int get_iphn_order(){ return this->iphn_order;}
        int get_ipod_order(){ return this->ipod_order;}
        string get_country(){ return this->country;}
};


class Passport{
    string passport_id = "";
    string passport_country = "";

    static bool isargentina(string str){
        bool flag = true;
        if(str.length() != 12) return false;
        // if(str[0] != 'A') return false;
        for(int i = 0; i < str.length(); i++){
            if(i == 0 && str[i] != 'A') {flag = false; break;}
            else if((i==1||i==2) && (isalpha(str[i] == 0))){flag = false; break;}
            else if(iswalnum(str[i]) == 0){flag = false; break;}
        }
        return flag;
    }

    static bool isbrazil(string str){
        bool flag = true;
        if(str.length() != 13) return false;
        for(int i = 0; i < str.length(); i++){
            if((i == 0) && (str[i] != 'B')){flag = false; break;}
            else if((i >= 1 && i <= 3) && (isdigit(str[i]) == 0)) {flag = false; break;}
            else if((i >= 4 && i <= 5) && (isalpha(str[i]) == 0)) {flag = false; break;}
            else if(iswalnum(str[i]) == 0) {flag = false; break;}
        }
        return flag;
    }

    string verify(){
        if(isargentina(this->passport_id)) return "ARGENTINA";
        else if(isbrazil(this->passport_id)) return "BRAZIL";
        else return "";
    }
    public:
        Passport(){
            this->passport_id = "";
            this->passport_country = "";
        }

        Passport(string passport_id){
            this->passport_id = passport_id;
            this->passport_country = verify();
        }

        string get_country(){ return this->passport_country;}
};


class Customer{
    string purchase_country = "";
    Passport *pst;
    public:
        Customer(string purchase_country, string passport_id){
            this->purchase_country = purchase_country;
            this->pst = new Passport(passport_id);
        }
        string get_purchase_country(){ return this->purchase_country;}
        string get_passport_country() { return this->pst->get_country();}
};


class Purchase{
    int iphn_order, ipod_order, total_cost;
    Customer *cst;
    Inventory *argt = new Inventory("ARGENTINA");
    Inventory *bzl = new Inventory("BRAZIL");
    public:
        Purchase(string country, string passport_id, int iphn_order, int ipod_order){
            this->cst = new Customer(country, passport_id);
            this->iphn_order = iphn_order;
            this->ipod_order = ipod_order;
            this->total_cost = 0;
        }

        int shipping_cost(int x, string str){
            int shipping_cost = 40*x;
            if(str.compare(this->cst->get_passport_country()) == 0) shipping_cost = 32*x;
            return shipping_cost;
        }

        int iphn_cost(){
            int min_iphn_cost = INT_MAX;
            int total_cost = 0, arg_x = 0; 
            int x = min(argt->get_iphn_count(), this->iphn_order);
            int y = this->iphn_order - x;
            do{
                total_cost = argt->get_iphn_price()*x + bzl->get_iphn_price()*y + shipping_cost(x, "ARGENTINA") + shipping_cost(y, "BRAZIL");
                if(total_cost <= min_iphn_cost){min_iphn_cost = total_cost; arg_x = x;}
                x--;
                y = this->iphn_order - x;  
            }while(x >= 0 &&  y<= bzl->get_iphn_count());
            argt->set_iphn_order(arg_x);
            bzl->set_ipod_order(this->iphn_order - arg_x);
            return min_iphn_cost;
        }

        int ipod_cost(){
            int min_ipod_cost = INT_MAX;
            int total_cost = 0, arg_x = 0;
            int x = min(argt->get_ipod_count(), this->ipod_order);
            int y = this->ipod_order - x;
            do{
                total_cost = argt->get_ipod_price()*x + bzl->get_ipod_price()*y + shipping_cost(x, "ARGENTINA") + shipping_cost(y, "BRAZIL");
                if(total_cost <= min_ipod_cost){min_ipod_cost = total_cost; arg_x = x;}
                x--;
                y = this->ipod_order - x;
            }while(x >= 0 && y <= bzl->get_ipod_count());
            argt->set_ipod_order(arg_x);
            bzl->set_ipod_order(this->ipod_order - arg_x);
            return min_ipod_cost;
        }

        void order_details(){
            this->total_cost = iphn_cost() + ipod_cost();
            cout<<"INVOICE";
            cout<<"\ntotal cost :"<<this->total_cost;
            cout<<"\nIpod brazil inventory: "<<bzl->get_ipod_count();
            cout<<"\nIpod Argentina inventory: "<<argt->get_ipod_count();
            cout<<"\nIphone Brazil inventory: "<<bzl->get_iphn_count();
            cout<<"\nIphone Argentina inventory: "<<argt->get_iphn_count();                        
        }

};


int main(){
    // Passport pst("B123AB1234567");
    // Customer cst("Brazil", "B123AB1234567");
    // cout<<cst.get_passport_country();
    string country, passport_id;
    int iphn_order, ipod_order;
    cout<<"Enter the purchase details\n";
    cout<<"Purchase country\n";
    cin>>country;
    cout<<"Passport id\n";
    cin>>passport_id;
    cout<<"Iphone order\n";
    cin>>iphn_order;
    cout<<"Ipod order\n";
    cin>>ipod_order;
    Purchase pchs(country, passport_id, iphn_order, ipod_order);
    pchs.order_details();
    
}