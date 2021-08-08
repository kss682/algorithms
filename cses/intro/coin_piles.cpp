//https://cses.fi/problemset/task/1754
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a == 0 && b == 0) cout<<"YES\n";
        else if(a == 0 || b == 0) cout<<"NO\n";
        else {
            if((a+b)%3){
                cout<<"NO\n";
            }
            else if(max(a,b) <= 2*min(a,b)){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }
}