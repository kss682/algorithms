/*
There are three friends; let's call them A, B, C. They made the following statements:

A: "I have x Rupees more than B."
B: "I have y rupees more than C."
C: "I have z rupees more than A."

You do not know the exact values of x,y,z
. Instead, you are given their absolute values, i.e. X=|x|, Y=|y| and Z=|z|. Note that x, y, z may be negative; "having −r rupees more" is the same as "having r

rupees less".

Find out if there is some way to assign amounts of money to A, B, C such that all of their statements are true
*/


#include<stdio.h>
#include<string.h>


int main()
{
int T,X,Y,Z,i;
scanf("%d", &T);
char ANS[T][10];
for(i=0;i<T;i++)
	{scanf("%d %d %d", &X, &Y, &Z);
	if(X+Y==Z || Y+Z==X || Z+X==Y)
		{strcpy(ANS[i],"yes");
		}
	else
		{strcpy(ANS[i],"no");
		}
	}
for(i=0;i<T;i++)
	printf("%s \n",ANS[i]);
}

		
		
