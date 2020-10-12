#include<bits/stdc++.h>
using namespace std;

int N;
int arr[50];
vector<vector<int>> permutat; 
vector<int> temp;
bool track[50] = {false};

void search(){
    if(temp.size() == N)
        permutat.push_back(temp);
    for(int i = 0; i < N ; i++){
        if(track[i]) continue;
        temp.push_back(arr[i]);
        track[i] = true;
        search();
        temp.pop_back();
        track[i] = false;
    }
}



int main(){
    int i;
    cout<<"Enter size of the array\n";
    cin>>N;
    cout<<"Enter the array values \n";
    for(i = 0;i< N;i++)
        cin>>arr[i];
    search();
    cout<<"All the permutations \n";
    
    for(int j = 0; j < permutat.size(); j++){
        for(int k = 0; k < permutat[j].size(); k++)
            cout<<permutat[j][k]<<"\t";
       cout<<endl;
    }    
    
}
