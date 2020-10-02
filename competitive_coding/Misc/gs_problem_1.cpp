//https://www.geeksforgeeks.org/count-numbers-in-range-such-that-digits-in-it-and-its-product-with-q-are-unequal/

#include<bits/stdc++.h>
using namespace std;

bool _check_status(int i, int q){
    map<int, bool> digits;
    int temp_i, temp_q;
    bool status = false;
    temp_i = i;
    while(temp_i != 0){
        digits.insert({temp_i%10, true});
        temp_i /= 10;  
    }
    temp_q = q;
    while(temp_q != 0){
        if(digits.find(temp_q%10) != digits.end()){
            status = true;
            break;
        }
       temp_q /= 10;
    }
   return status;
}

int main(){
    int x,y,z,i,counter = 0;
    bool status;
    cout<<"Enter the number range\n";
    cin>>y>>z;
    cout<<"Enter the multiplicand value\n";
    cin>>x;
    cout<<1/10;
    for(i = y; i <= z; i++){
        status = _check_status(i, i*x);
        if(status == false)
            counter++;
    }
    cout<<"Count = "<<counter;
}
