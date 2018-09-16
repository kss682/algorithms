/* This program is used to count number 
of perfect numbers between 2 given numbers*/


#include<stdio.h>
#include<math.h>
int square(int value)
{
double square;
square=sqrt(value);
if(square-floor(square)==0)
	return 1;
else
	return 0;
	
}

void main()
{
int start,end,count;
int num,T,i;
printf("enter number of test cases\n");
scanf("%d", &T);
for(i=1;i<=T;i++)
{count=0;
printf("\nEnter the starting and ending values\n");
scanf("%d %d", &start, &end);
num=start;
while(num<=end)
{
if(square(num)==1)
	count+=1;
num+=1;
}
printf("\nthe number of perfect square btw %d and %d is %d\n",start,end,count);

}
}
