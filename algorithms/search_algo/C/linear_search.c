#include<stdio.h>


void main()
{
int arr[100],i,n,x,flag=0;
printf("enter the no of elements\n");
scanf("%d",&n);
printf("\nenter the array elments\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nenter the element to be searched\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(arr[i]==x)
	{printf("\nnumber is at pos %d\n",i);
	flag=1;
	}
}
if(flag==0)
	printf("the number is not found");
}
