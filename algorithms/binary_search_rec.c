#include<stdio.h>
#define MAX 100

int arr[MAX],value;

void binary(int first,int last)
{int mid=(first+last)/2;
if(last>=first)
	{if(arr[mid]==value)
		printf("The position of element is at %d \n ",mid);
	else if(arr[mid]>value)
		binary(first,mid-1);
	else if(arr[mid]<value)
		binary(mid+1,last);
	}
else
	printf("No such value\n");
	
}
void main()
{
int n,i,first,last;
printf("enter the number of elements\n");
scanf("%d", &n);
printf("\n enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
printf("enter the value to be searched\n");
scanf("%d",&value);
first=0;
last=n-1;
binary(first,last);
}
