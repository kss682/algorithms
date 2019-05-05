/* Insertion sort
   Time complexity-O(n^2)


*/
#include<bits/stdc++.h>

using namespace std;
vector<int> arr;
void Insertion(){
  int i,j,tmp,n;
  n = arr.size();
  for(i=0;i<n;i++){
    tmp = arr[i];
    j = i-1;
    while(j>=0 && arr[j]>tmp){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = tmp;
  }

}
int main(){
	int i,n,value;

	cout<<"Enter the array size\n";
	cin>>n;
	cout<<"Enter the array\n";
	for(i = 0;i<n;i++){
		cin>>value;
		arr.push_back(value);
	}
	Insertion();
	cout<<"Sorted array\n";
	for(i=0;i<n;i++){
		cout<<arr[i]<<'\n';
	}

}
