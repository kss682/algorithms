//https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>
using namespace std;

int X = 0;

int main(){
    int N;
    cin>>N;
    while(N > 0){
        string s1;
        int i = 0;
        cin>>s1;
        while(i < s1.length()){
            if(s1[i] == '+'){
                X++;
                i += 2;
            }
            else if(s1[i] == '-'){
                X--;
                i += 2;
            }
            else if(s1[i] == 'X') i++;
        }
        N--;
    }
    cout<<X<<endl;
}