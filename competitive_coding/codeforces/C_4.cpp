//https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>
using namespace std;

unordered_map<string, int> mm;

string find_name(string s1){
    string temp;
    // int i = 0;
    // do{
    //     i++;
    //     //string temp;
    //     temp = s1 + to_string(i);
    // }while(mm.find(temp) != mm.end());
    // mm[temp] = true;
    temp = s1 + to_string(mm[s1] + 1);
    mm[s1]++;
    return temp;
}

int main(){
    int N;
    cin>>N;
    for(int i = 1; i <= N;i++){
        string s1;
        cin>>s1;
        if(mm.find(s1) == mm.end()){
            mm[s1] = 0;
            cout<<"OK"<<endl;
        }
        else{
            string temp;
            temp = find_name(s1);
            cout<<temp<<endl;
        }
    }

}