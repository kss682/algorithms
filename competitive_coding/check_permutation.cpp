/*
    Given 2 strings , check if one is a permutation of the other.

*/
#include<bits/stdc++.h>
using namespace std;

bool check_perm(string str1, string str2){
    unordered_map<char, int> hash1;
     unordered_map<char, int> hash2;
    for(auto itr = str1.begin();itr != str1.end(); itr++){
        if(hash1.find(*itr) != hash1.end())
            hash1[*itr] += 1;
        else
            hash1[*itr] = 1;
    }
    for(auto itr = str2.begin();itr != str2.end(); itr++){
        if(hash2.find(*itr) != hash2.end())
            hash2[*itr] += 1;
        else
            hash2[*itr] = 1;
    }
    for(auto itr = hash1.begin(); itr != hash1.end(); itr++){
        if(hash2.find(itr->first) != hash2.end()){
            if(hash2[itr->first] != itr->second)
                return false;
        }
        else
            return false;
    }
    return true;
    
    
}


int main(){
  bool result;
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  if(str1.length() == str2.length())
    result = check_perm(str1, str2);
  else
    result = false;
  if(result == true)
    cout<<"Permutation";
  else
    cout<<"Not a permutation";  
}
