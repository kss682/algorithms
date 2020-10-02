#include<bits/stdc++.h>
using namespace std;


string compress(string str1){
    string str2;
    char count;
    int TOP = -1, counter = 0;
    for(auto itr = str1.begin();itr != str1.end(); itr++){
        if(TOP == -1){
            str2.push_back(*itr);
            TOP++;
            counter++;
        }
        else if(str2[TOP] == *itr){
            counter++;
        }
        else if(str2[TOP] != *itr){
            count = to_string(counter);
            str2.push_back(count);
            TOP++;
            str2.push_back(*itr);
            TOP++;
            counter=1;
        }
    }
   count = to_string(counter);
   str2.push_back(count);    
   return str2;
}


int main(){

    string str1, str2;
    getline(cin, str1);
    cout<<"Current string form: "<<str1<<endl;
    str2 = compress(str1);
    cout<<str2;
    if(str2.length() >= str1.length())
        cout<<str1;
    else
        cout<<str2;
}
