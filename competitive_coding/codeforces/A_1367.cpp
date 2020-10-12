//https://codeforces.com/problemset/problem/1367/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1, ans = "";
    cin>>s1;
    ans += s1[0];
    int length = s1.length();
    for(int i = 1;i < length - 1; i+=2){
        ans += s1[i];
    }
    ans += s1[length-1];
    cout<<ans<<endl;
}


int main(){
    int T;
    cin>>T;
    while(T>0){
        solve();
        T--;
    }
}