//https://cses.fi/problemset/task/1618
#include<bits/stdc++.h>
using namespace std;

// unsigned long long count_two = 0, count_five = 0;

// void count(int i){
//     while(i%2 == 0 || i%5==0){
//         if(i%2==0 && i%5==0){
//             count_two++;
//             count_five++;
//             i = i/10;
//         }
//         else if(i%2==0){
//             count_two++;
//             i=i/2;
//         }
//         else if(i%5==0){
//             count_five++;
//             i=i/5;
        
//         }
//     }
// }

int main(){
    int n;
    unsigned long long ans = 0;
    cin>>n;
    for(int i = 5; i <=n; i*=5){
        ans += n/i;
    }
    cout<<ans;
}