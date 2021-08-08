//https://cses.fi/problemset/task/1084
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m,k, i, temp;
    vector<int> app, aprt;
    cin>>n>>m>>k;

    for(i =0; i < n; i++){
        cin>>temp;
        app.push_back(temp);
    }

    for(i = 0; i<m; i++){
        cin>>temp;
        aprt.push_back(temp);
    }
    sort(app.begin(), app.end());
    sort(aprt.begin(),aprt.end());


    int j = 0, count = 0;
    for(auto itr: app){
        while(j < m && aprt[j] < itr - k)   j++;
        if(j < m && aprt[j] <= itr + k) {
            count++;
            j++;
        }
    }
    cout<<count;
}
