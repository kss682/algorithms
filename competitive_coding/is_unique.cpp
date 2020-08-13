/*
Check if a string has all unique characters

*/

#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> hash_char;

int main(){
    string str;
    getline(cin, str);
    int flag = 1;
    for(auto itr = str.begin(); itr != str.end(); itr++)
    {    if(hash_char.find(*itr) != hash_char.end())
                {
                    flag = 0;
                    break;
                }
         else
            hash_char.insert({*itr, 1}); 

    }
    
    if(flag == 1)
        cout<<"All unique characters";
    else
        cout<<"Not unique";
}
