#include<stdio.h>
#include<math.h>
#define MAX 10000
int isPrime(int num)
{
int m,n,flag=1;
for(m=2;m<num;m++)
	{
	if(num%m==0)
		{flag=0;
		break;
		}	
	}
return(flag);
}



void main()
{
int T,N,i,arr[MAX];
scanf("%d ",&T);
for(i=0;i<T;i++)
{int count=1,j=2;
scanf("%d",&N);
while(count!=N)
	{j+=1;
	if(isPrime(j)==1)
		count+=1;
	
	
	}
arr[i]=j;
}
for(i=0;i<T;i++)
	{printf("%d \n",arr[i]);
	}
}


