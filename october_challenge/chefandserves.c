#include<stdio.h>
#include<string.h>
/*
The first line of the input contains a single integer T denoting the number of test cases. The description of T
test cases follows.
The first and only line of each test case contains three space-separated integers P1
, P2 and K.
*/

int main()
{
int T,P1,P2,K,i,Sum=0;
int Chef,Cook;
scanf("%d",&T);
char ANS[T][10];
for(i=1;i<=T;i++)
	{scanf("%d %d %d", &P1, &P2, &K);
	Chef=1;
	Cook=-1;
	Sum=P1+P2;
	while(Sum>=K)
		{Chef*=-1;
		Cook*=-1;
		Sum-=K;
		}
	if(Chef==1)
		strcpy(ANS[i-1],"CHEF");
	else
		strcpy(ANS[i-1],"COOK");
	}
for(i=0;i<T;i++)
	printf("%s \n",ANS[i]);
}
			


