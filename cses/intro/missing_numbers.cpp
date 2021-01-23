// https://cses.fi/problemset/task/1083
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, i, total_sum = 0, array_sum = 0, temp;
    cin>>n;
    total_sum = (n*(n+1))/2;
    for(i = 0;i < n-1; i++){
        cin>>temp;
        array_sum += temp;
    }
    cout<<total_sum - array_sum;
}