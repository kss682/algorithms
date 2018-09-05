#include<stdio.h>
#define MAX 10

int hash(int number,int arr[],int n)
{
int index=number%10,i=1;
while(arr[index]!=0)
	{index=(number%10+i)%10;
	i++;
	
	}
return index;
}



void main()
{
int n,arr[MAX]={0*MAX},number,value,i,index;
printf("enter no of elements\n");
scanf("%d",&n);
printf("\n enter the elements \n");
for(i=0;i<n;i++)
	{scanf("%d",&number);
	index=hash(number,arr,n);
	arr[index]=number;
	}

printf("\n________\n");
for(i=0;i<MAX;i++)
	{printf("|%2d | %4d |\n",arr[i],i);
	
	}
printf("\n________\n");
}

	
