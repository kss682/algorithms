//https://cses.fi/problemset/task/1755
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// TLE 
// int main(){
//     string str;
//     cin>>str;
//     unordered_map<char, int> mm;
//     for(auto itr: str) {
//         if(mm.find(itr) == mm.end())mm[itr] = 1;
//         else mm[itr]++;
//     }
//     int odd_count = 0;
//     for(auto itr: mm){
//         if(itr.second%2) odd_count++;
//         if(odd_count > 1) {
//             cout<<"NO SOLUTION";
//             return 0;
//         }
//     }
//     string str1 = "", str2 = "";
//     char odd_char;
//     for(auto itr: mm){
//         if(itr.second%2) {odd_char = itr.first;
//             itr.second--;
//         }
//         int temp = itr.second;
//         while(temp != 0){
//             str1 = str1 + itr.first;
//             str2 = itr.first + str2;
//             temp -= 2;
//         }
//     }
//     string ans = "";
//     if(odd_count == 1) ans = str1 + odd_char + str2;
//     else ans = str1 + str2;
//     cout<<ans; 
    
// }

int main(){
    string str;
    char odd_char;
    int mm[26] = {0}, odd_count = 0;
    cin>>str;
    for(auto itr: str)
        mm[itr - 'A']++;
    for(int i = 0; i < 26; i++){
        if(mm[i]%2){ 
            odd_count++;
            odd_char = (char)(i+65);
        }
    }
    if(odd_count > 1) {
        cout<<"NO SOLUTION\n";
        return 0;
    }
    mm[odd_char - 'A']--;
    string str1 = "";
    for(int i =0;i < 26; i++){
        if(mm[i] > 0){
            for(int j = mm[i]; j > 0; j-=2){
                str1 = str1 + (char)(i+65);
            }
        }
    }
    cout<<str1;
    if(odd_count != 0) cout<<odd_char;
    reverse(str1.begin(), str1.end());
    cout<<str1;
}