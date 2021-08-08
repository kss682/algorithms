//https://cses.fi/problemset/task/1619
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, a, b;
    map<int, int> hh;
    cin>>n;
    for(i =0; i<n; i++){
        cin>>a>>b;
        hh[b] = a;
    }

    auto itr = hh.begin();
    int count = 1, prev = 0;
    prev = itr->first;
    // cout<<itr->first<<" ";
    itr++;
    while(itr != hh.end()){
        // cout<<itr->first<<" ";
        if(itr->second >= prev){
            count++;
            prev = itr->first;
        }
        itr++;
    }
    cout<<count;
}