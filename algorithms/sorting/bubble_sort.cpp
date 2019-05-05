/*
BUBBLE SORT -

Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.

Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

*/
#include<bits/stdc++.h>

using namespace std;
vector<int> arr;
void bubblesort(){
	int i,j,tmp,n;
	n = arr.size();
	for (i=0;i<n;i++ ) {
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
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
	bubblesort();
	cout<<"Sorted array\n";
	for(i=0;i<n;i++){
		cout<<arr[i]<<'\n';
	}

}
