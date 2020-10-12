//https://codeforces.com/problemset/problem/490/A

#include<bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> hash_map;

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin>>arr[i];
        hash_map[arr[i]].push_back(i+1);
    }
    if(!(hash_map.find(1) == hash_map.end()) && !(hash_map.find(2) == hash_map.end()) && !(hash_map.find(3) == hash_map.end())){
        int size_1, size_2, size_3, min_size;
        size_1 = (hash_map[1].size() > hash_map[2].size()) ? hash_map[2].size() : hash_map[1].size();
        size_2 = (hash_map[2].size() > hash_map[3].size()) ? hash_map[3].size() : hash_map[2].size();
        min_size = (size_1 > size_2) ? size_2 : size_1;
        cout<<min_size<<endl;
        for(int i = 0; i < min_size; i++)
                cout<<hash_map[1][i]<<" "<<hash_map[2][i]<<" "<<hash_map[3][i]<<endl;         
    }
    else
        cout<<0<<endl;
}