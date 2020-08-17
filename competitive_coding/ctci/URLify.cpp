/*
    Replace the space in the strings with %20 
*/

#include<bits/stdc++.h>
using namespace std;
char URL[] = {'%', '2', '0'};


int main(){
    string str1, str2;
    int i,j,true_length;
    getline(cin, str1);
    cin>>true_length;
    for(i = 0;i < true_length; i++){
        if(isspace(str1[i]))
            {
                for(j = 0;j< 3; j++)
                    str2.push_back(URL[j]);
            }
       else
            str2.push_back(str1[i]); 
    }
    cout<<str2;
}
