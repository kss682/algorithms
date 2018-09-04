#include<stdio.h>
#define MAX 20

int hash(int number,int arr[],int n)
{
int index=number%10,i=1;

while(arr[index]!=0)
	{index=number%10+i*i;
	if(index>MAX)
		index=index-MAX;
	i++;
	}
return index;
}



void main()
{
int n,arr[MAX]={0*MAX},number,i,index;
printf("enter no of elements\n");
scanf("%d",&n);
printf("\nenter the elements\n");
for(i=0;i<n;i++)
	{scanf("%d",&number);
	index=hash(number,arr,n);
	arr[index]=number;
	}

printf("\n_________\n");
for(i=0;i<MAX;i++)
	{printf("| %2d | %5d |\n",arr[i],i);
	}
printf("\n_________\n");

}
