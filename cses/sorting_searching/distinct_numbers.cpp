//https://cses.fi/problemset/task/1621
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, temp;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin>>temp;
        arr.push_back(temp);
    }

    int count = 0;
    sort(arr.begin(), arr.end());
    temp = 0;
    for(auto itr: arr){
        if(temp != itr){
            temp = itr;
            count++;
        }
    }
    cout<<count;
}