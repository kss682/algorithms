//https://cses.fi/problemset/task/1094
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, i, cur = 0, prev = 0, moves = 0;
    cin>>n;
    cin>>prev;
    for(i = 1; i < n; i++){
        cin>>cur;
        if(prev > cur) {
            moves += (prev - cur);
            cur = prev;
        }
        prev = cur;
    }
    cout<<moves;
}