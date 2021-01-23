//https://cses.fi/problemset/task/1070
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n == 1) cout<<1;
    else if(n < 4)   cout<<"NO SOLUTION";
    else{
        deque <int> qq= {2, 4, 1, 3};
        for(int i = 5; i <= n; i++){
            if(i%2 == 0)    qq.push_front(i);
            else qq.push_back(i);
        }
        for(auto itr: qq) cout<<itr<<" ";
    }
}