//https://codeforces.com/problemset/problem/112/A

#include<bits/stdc++.h>
using namespace std;


int main(){
    int flag = 0;
    string s1, s2;
    cin>>s1;
    cin>>s2;
    for(int i = 0; i < s1.length(); i++){
        if(tolower(s1[i]) > tolower(s2[i])){ 
                    flag = 1;
                    break;
        }
        else if(tolower(s1[i]) < tolower(s2[i])) { flag = -1; break ; }
    }
    if(flag == 1) cout<<"1"<<endl;
    else if (flag == -1) cout<<"-1"<<endl;
    else cout<<"0"<<endl;
}
