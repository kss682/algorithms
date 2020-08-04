// https://www.geeksforgeeks.org/minimum-initial-energy-required-to-cross-street/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T, N, i, temp,sum, min_energy;
    cin>>T;
    while(T > 0){
        min_energy = 1;
        sum = 0;
        cin>>N;
        int arr[N];
        for(i = 0;i < N; i++){
            cin>> arr[i];     
            sum += arr[i];
            if(sum < 0 && (abs(sum) > min_energy)){
                min_energy = abs(sum) + 1; 
           }
        }
        cout<<min_energy<<endl;
        T--;
    }
}
