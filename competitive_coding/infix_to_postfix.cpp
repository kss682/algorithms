#include<bits/stdc++.h>
using namespace std;

map<char, int> precedence_order;
precedence_order.insert(')', 0);
precedence_order.insert('^', 1);
precedence_order.insert('/', 2);
precedence_order.insert('*', 3);
precedence_order.insert('+', 4);
precedence_order.insert('-', 5);
precedence_order.insert('(', 6);


bool check_char(char ch){
    bool condition = true;
    switch(ch){
        case '^': condition = false;
                  break;
        case '/': condition = false;
                  break;
        case '*': condition = false;
                  break;
        case '+': condition = false;
                  break;
        case '-': condition = false;
                  break;
    }

  return condition;
}

bool check_precedence(char ch1, char ch2){
    bool condition = true;
    if(precedence_order[ch1] > precedence_order[ch2])
    
}

int main(){
    //int TOP1 = -1, TOP2 = -1;
    string infix;
    stack<char> operators;
    stack<char> process; 
    cin>> infix;
    for(auto itr = infix.begin(); itr != infix.end(); itr++)
    {
        if(check_char(*itr)){
            process.push(*itr);
        }
        else{
            while(check_precedence(*itr, operators.top())){
                
            }
    }

}
