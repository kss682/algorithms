#include<bits/stdc++.h>
using namespace std;

int find_infected(int N, int K, int X, int Y){
    int i;
    unordered_map<int, bool> hash;
    i = X;
    do{
        hash[i] = true;
        if(hash.find(Y) != hash.end())
            return 1;
        i = (i + K)%N;         
    }while(i != X);
    return 0;
}


int main(){
    int T, N, K, X, Y;
    cin>>T;
    while(T>0){
        cin>>N>>K>>X>>Y;
        if(find_infected(N, K, X, Y) == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        T--;
    }

}
