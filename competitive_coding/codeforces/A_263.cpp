//https://codeforces.com/problemset/problem/263/A
#include<bits/stdc++.h>
using namespace std;


int main(){
    int cur_i, cur_j;
    int arr[5][5];
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){ cur_i = i; cur_j = j;}
        }
    }
    int ans;
    ans = abs(cur_i - 2) + abs(cur_j - 2);
    cout<<ans<<endl;
}