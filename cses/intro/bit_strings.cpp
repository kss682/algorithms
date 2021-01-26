//https://cses.fi/problemset/task/1617
#include<bits/stdc++.h>
using namespace std;

unsigned long long MOD = 1000000007;


int main(){
    int n;
    cin>>n;
    unsigned long long ans=1;
    for(int i = 1; i <= n; i++){
        ans = (ans*2)%MOD;
    }
    cout<<ans;
}