/*Today, all three conditions are satisfied. Chef would like you to feel his happiness and provide him with a solution for this new problem with a sequence of integers. The problem is as follows.

You are given a sequence A1,A2,…,AN
. You need to determine if it is possible to choose two indices i and j such that Ai≠Aj, but AAi = AAj. (If it was possible, Chef would be truly happy.

*/

#include<stdio.h>
#include<string.h>


int check(int Arr[],int N)
{
printf("called\n");
int i,j,t1,t2;
for(i=0;i<N;i++)
	{for(j=0;j<N;j++)
		{	printf("%d %d %d %d \n",Arr[i],Arr[j],Arr[Arr[i]],Arr[Arr[j]]);
			if(Arr[i]!=Arr[j] && Arr[Arr[i]] == Arr[Arr[j]])
			{printf("%d %d",Arr[Arr[i]] ,Arr[Arr[j]]);
			return 1;
			}
		}
	}
return 0;
} 

int main()
{
int i,T,N,j,value=0;
scanf("%d", &T);
int Arr[T];
char ANS[T][20];
for(i=0;i<T;i++)
	{scanf("%d", &N);
	for(j=0;j<N;j++)
		scanf("%d", &Arr[j]);
	value=check(Arr,N);
	printf("%d", value);
	if(value == 1)
		strcpy(ANS[i],"Truly Happy");
	else	
		strcpy(ANS[i],"Poor Chef");
	}
for(i=0;i<T;i++)
	printf("%s \n",ANS[i]);
}
