#include<stdio.h>


void main()
{
int N,num,i=1;
printf("enter the number of values to be checked.\n");
scanf("%d",&N);
while(i<=N)
{
printf("\nenter the value\n");
scanf("%d",&num);

if(num%3==0 && num%5==0)
	printf("FIZZ BUZZ\n");

else if(num%3==0)
	printf("FIZZ\n");
else if(num%5==0)
	printf("BUZZ\n");
else
	printf("Ordinary Number\n");

i++;
}

}
