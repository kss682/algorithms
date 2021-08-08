//https://cses.fi/problemset/task/2205
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string str;
int str_len, pcount = 0;
map<vector<char>, bool> permutat;
vector<char> temp;
bool track[8]={false};

void search(){
    if(temp.size() == str_len){
        if(permutat.find(temp) == permutat.end()){
            permutat[temp] = true;
            pcount++;
        } 
    }
    else{
        for(int i =0; i < str_len; i++){
        if(track[i]) continue;
        temp.push_back(str[i]);
        track[i] = true;
        search();
        temp.pop_back();
        track[i] = false;
        }
    }
}

int main(){
    cin>>str;
    str_len = str.size();
    search();
    cout<<pcount<<"\n";
    for(auto itr: permutat){
        for(int j = 0; j < itr.first.size(); j++){
            cout<<itr.first[j];
        }
        cout<<"\n";
    }
}