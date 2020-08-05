/*
A Little Elephant and his friends from the Zoo of Lviv like candies very much.

There are N elephants in the Zoo. The elephant with number K (1 ≤ K ≤ N) will be happy if he receives at least AK candies. There are C candies in all in the Zoo.

The Zoo staff is interested in knowing whether it is possible to make all the N elephants happy by giving each elephant at least as many candies as he wants, that is, the Kth elephant should receive at least AK candies. Each candy can be given to only one elephant. Print Yes if it is possible and No otherwise. 

*/

#include<stdio.h>
#include<string.h>
#define MAX 10000


int main()
{
int T,N,i,A[MAX],C;
scanf("%d", &T);
char ANS[T][5];
for(i=0;i<T;i++)
	{int j,Sum=0;
	scanf("%d %d", &N, &C);
	for(j=0;j<N;j++)
		{scanf("%d", &A[j]);
		Sum+=A[j];
		}
	if(Sum>C)
		strcpy(ANS[i],"No");
	else
		strcpy(ANS[i],"Yes");
	}
for(i=0;i<T;i++)
	printf("%s \n",ANS[i]);
}


