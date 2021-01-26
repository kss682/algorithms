//https://cses.fi/problemset/task/1071
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long ans, temp, x, y;
    cin>>t;
    while(t > 0){
        cin>>x>>y;
        if(x >= y){
            temp = x*x;
            if(x%2 == 0) ans = temp - (y - 1);
            else ans = temp - 2*(x - 1) + (y - 1);
        }
        else{
            temp = y*y;
            if(y%2 == 0) ans = temp - 2*(y - 1) + (x - 1);
            else ans = temp - (x - 1);
        }
        cout<<ans<<"\n";
        t--;
    }
}