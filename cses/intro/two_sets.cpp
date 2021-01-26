//https://cses.fi/problemset/task/1092
#include<bits/stdc++.h>
// typedef long long ll;
using namespace std;

int main(){
    int n;
    unsigned long long sum;
    cin>>n;
    sum = (n*(n+1))/2;
    if(sum%2 == 0){
        cout<<"YES\n";
        vector<int> v1, v2;
        if(n%2 == 0){
            int j=1, k=n;
            while(j <= n/2){
                if(j%2 != 0){
                    v1.push_back(j);
                    v1.push_back(k);
                }
                else{
                    v2.push_back(j);
                    v2.push_back(k);
                }
                j++;
                k--;
            }
        }
        else{
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            if(n > 3){
                int i = 0, j = 4, k = n;
                while(i < (n-3)/2){
                    if(i%2 == 0){
                        v1.push_back(j + i);
                        v1.push_back(k - i);
                    }
                    else{
                        v2.push_back(j + i);
                        v2.push_back(k - i);
                    }
                    i++;
                }
            }
        }
        cout<<v1.size()<<"\n";
        for(auto itr: v1) cout<<itr<<" ";
        cout<<"\n"<<v2.size()<<"\n";
        for(auto itr: v2) cout<<itr<<" ";
    }   
    else
        cout<<"NO\n";
}