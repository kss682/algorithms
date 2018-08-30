#include<stdio.h>
#include<math.h>				//To check if the numbers are prime or not
#define MAX 10000

int isPrime(int num)
{
	int m,n,flag=1;
	for(m=2;m<num;m++)
	{
		if(num%m==0)
		{
			flag=0;
			break;
		}
	}
return(flag);
}



void main()
{
	int lim,N,i,arr[MAX];
	printf("No of test cases:");
	scanf("%d ",&lim);
	for(i=0;i<lim;i++)
	{
		int count=1,j=2;
		printf("Enter the position:");
		scanf("%d",&N);
		while(count!=N)
		{
			j+=1;
			if(isPrime(j)==1)
				count+=1;
		}
		arr[i]=j;
	}
	for(i=0;i<T;i++)
	{

		printf("%d : %d \n",i,arr[i]);
	}
}


