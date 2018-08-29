/* This program is used to 
find the gcd and lcm of 2 numbers */



#include<stdio.h>

int GCD(int a,int b)
{if(a==b)
	return a;
if(a>b)
	return GCD(a-b,b);

return GCD(a,b-a);
}

int LCM(int a,int b)
{
int lcm;
lcm=(a*b)/GCD(a,b);
return lcm;
}


void main()
{
int num1,num2,gcd,lcm;
printf("enter the 2 numbers\n");
scanf("%d %d", &num1, &num2);
gcd=GCD(num1,num2);
lcm=LCM(num1,num2);
printf("\nthe gcd is %d \n the lcm is %d \n",gcd,lcm);
}
