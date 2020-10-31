//https://www.codechef.com/OCT20B/problems/CHEFEZQ
#include<bits/stdc++.h>
using namespace std;

int calculate_free(int arr[], int n, int k){
    int i, count = 0;
    for(i = 0; i < n; i++){
        count++;
        if(arr[i] < k) break;
        else if(arr[i] >= k){
            if(i+1 == n){
                count += arr[i]/k;
                break;
            }
            else{
                arr[i+1] += arr[i] - k;
            }
        }
    }
    
    return count;
}


int main(){
    int T, N, K, i;
    cin>>T;
    while(T > 0){
        cin>>N>>K;
        int ans, array[N];
        for(i =0;i<N;i++)
            cin>>array[i];
        ans = calculate_free(array, N, K);
        cout<<ans<<endl;
        T--;
    }

}
