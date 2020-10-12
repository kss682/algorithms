//https://codeforces.com/problemset/problem/1145/A

#include<bits/stdc++.h>
using namespace std;

int N;
int arr[16];
int max_length = 0;

bool check_sort(int start, int end){
    for(int i = start; i < end -1; i++)
    {    if(arr[i] > arr[i+1]) return false;}
    return true;
}

void search_sort(int start, int end){
    if(end-start == 0) return;
    if(check_sort(start, end)){
        if((end - start) > max_length) max_length = (end-start);
    }   
    else{
        int mid = (start + end)/2;
        search_sort(start, mid);
        search_sort(mid, end);
    }
}

int main(){
    cin>>N;
    memset(arr, 0, N);
    for(int i = 0; i < N; i++)
        cin>>arr[i];
    search_sort(0, N);
    cout<<max_length<<endl;
}