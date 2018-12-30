#include<stdio.h>
#define MAX 20

int partition(int arr[],int lb,int ub)
{
int pivot=arr[lb],up=ub,down=lb,temp=0;
while(up>down)
	{
	while(arr[down]<=pivot && down<ub)
		{down++;
		}
	while(arr[up]>pivot)
		{up--;
		}
	if(up>down)
		{temp=arr[down];
		arr[down]=arr[up];
		arr[up]=temp;
		}
	}
arr[lb]=arr[up];
arr[up]=pivot;
return up;
}	




void quicksort(int arr[],int lb,int ub)
{
if(lb>=ub)
	return;
int j;
j=partition(arr,lb,ub);
quicksort(arr,lb,j-1);
quicksort(arr,j+1,ub);

return;
}


void main()
{
int n,arr[MAX],i;
printf("enter no of elements\n");
scanf("%d",&n);
printf("\nenter the elements\n");
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
quicksort(arr,0,n-1);
printf("\n sorted array\n");
for(i=0;i<n;i++)
	printf("%d \t",arr[i]);
}

