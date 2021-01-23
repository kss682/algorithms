//https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, seq_count, temp_count, i = 0, j = 0;
    string sequence;
    cin>>sequence;
    while(sequence[i] != '\0'){
        j = i;
        temp_count = 0;
        while(sequence[j] != '\0' && sequence[i] == sequence[j]){
            temp_count++;
            j++;
        }
        if(temp_count >= seq_count) seq_count = temp_count;
        i = j;
    }
    cout<<seq_count;
}