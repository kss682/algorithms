//https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    string s1;
    cin>>s1;
    for(auto itr = s1.begin();itr != s1.end();itr++){
        if(*itr == '1') v1.push_back(1);
        else if(*itr == '2') v1.push_back(2);
        else if(*itr == '3') v1.push_back(3); 
    }
    sort(v1.begin(), v1.end());
    string ans = "";
    for(auto itr = v1.begin(); itr != v1.end(); itr++){
        if(ans.length() != 0)
            ans += "+";
        if(*itr == 1) ans += "1";
        else if (*itr == 2) ans += "2";
        else if (*itr == 3) ans += "3"; 
    }
    cout<<ans;
}