#include<stdio.h>


int main(){
	int n,i;
	printf("Fibonacci number :\n");
	scanf("%d",&n);
	int fibb[n];
	fibb[0] = 1;
	fibb[1] = 1;
	for(i=2;i<n;i++){
		fibb[i] = fibb[i-1] + fibb[i-2];	
	}
	printf("The %dth fibbonaci is :%d",n,fibb[n-1]);
}
