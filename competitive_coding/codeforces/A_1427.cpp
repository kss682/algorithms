//https://codeforces.com/problemset/problem/1427/A

#include<bits/stdc++.h>
using namespace std;


int N;
bool flag = false;
int arr[50];
vector<int> temp;
bool track[50] = {false};

void calc_sum(vector<int> v){
    int sum = 0;
    for(auto itr = v.begin(); itr != v.end(); itr++){
        sum += *itr;
        if(sum == 0) return;
    }
    cout<<"YES\n";
    for(auto itr = v.begin(); itr != v.end(); itr++)
        cout<<*itr<<" ";
    flag = true;
}

void search(){
    if(temp.size() == N){
        calc_sum(temp);
    }
    else{
    for(int i = 0; i < N; i++){
        if(track[i]) continue;
        temp.push_back(arr[i]);
        track[i] = true;
        search();
        if(flag) return;
        temp.pop_back();
        track[i] = false;
    }       
    }
}
    

int main(){
    int T;
    cin>>T;
    while(T > 0){
        cin>>N;
        memset(arr, 0, N);
        for(int i = 0; i < N; i++)
            cin>>arr[i];
        search(); 
        if(flag == false) cout<<"No";
        flag = false;
        T--;
        temp.clear();
        memset(track, 0, 50);
        cout<<endl;
    }

}

