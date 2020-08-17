/*
    Check if the string is a permutation of a palindrome.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char, int> hash;
    string str1;
    char temp;
    int len = 0, odd_counter;
    bool result = true;
    
    getline(cin, str1);

    for(auto itr = str1.begin(); itr != str1.end(); itr++){
        temp = tolower(*itr);
        cout<<temp;
       if(temp != ' '){
            if(hash.find(temp) != hash.end()){
                hash[temp] += 1;
                len++;
            }
            else{
                hash[temp] = 1;
                len++;
           }
        }
    }
    if(len%2 == 0)
        odd_counter = 0;
    else
        odd_counter = 1;

    for(auto itr = hash.begin(); itr != hash.end();itr++){
        if(itr->second%2 != 0){
            if(odd_counter == 1)
                odd_counter--;
            else{
                result = false;
                break;
            }
                
        }
            
    }
    
    if(result)
        cout<<"Permutations";
    else
        cout<<"Not permutation";    

}


