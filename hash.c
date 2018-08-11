#include <stdio.h>
#define  MAX 10



void main()
{
int arr[MAX];
int i,n=10,num,index,value,search;
printf("enter the elements\n\n");
for(i=0;i<n;i++)
{scanf("%d",&num);
index=num%MAX;
arr[index]=num;
}
printf("enter the number to be searched\n");
scanf("%d",&search);
value=search%MAX;
printf("position is %d",value);	

}


