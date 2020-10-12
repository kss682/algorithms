//https://codeforces.com/problemset/problem/732/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, r, i = 1, count = 0;
    cin>>k>>r;
    while(i <= 10){
        count++;
        if((i*k)%10 == 0 || (i*k)%10 == r) break;
        i++;
    }
    cout<<count;
}