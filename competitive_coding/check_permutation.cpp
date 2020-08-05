/*
    Given 2 strings , check if one is a permutation of the other.

*/
#include<bits/stdc++.h>
using namespace std;

bool check_perm(string str1, string str2){
    

}


int main(){
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  if(str1.length() >= str2.length())
    result = check_perm(str1, str2);
  else
    result = check_perm(str2, str1);
  if(result == true)
    cout<<"Permutation";
  else
    cout<<"Not a permutation";  
}
