/*hef likes to write poetry. Today, he has decided to write a X pages long poetry, but unfortunately his notebook has only Y pages left in it. Thus he decided to buy a new CHEFMATE notebook and went to the stationary shop. Shopkeeper showed him some N notebooks, where the number of pages and price of the ith one are Pi pages and Ci rubles respectively. Chef has spent some money preparing for Ksen's birthday, and then he has only K rubles left for now.

Chef wants to buy a single notebook such that the price of the notebook should not exceed his budget and he is able to complete his poetry.

Help Chef accomplishing this task. You just need to tell him whether he can buy such a notebook or not. Note that Chef can use all of the Y pages in the current notebook, and Chef can buy only one notebook because Chef doesn't want to use many notebooks.
*/

#include<stdio.h>
#include<string.h>


int main()
{
long int T,N;
int X,Y,K,i,j,P,C;
scanf("%ld", &T);
char ANS[T][20];
for(i=0;i<T;i++)
	{int flag=0;
	scanf("%d %d %d %ld", &X, &Y, &K, &N);
	for(j=0;j<N;j++)
		{scanf("%d %d", &P, &C);
		if(X-Y<=P && C<=K)
			flag=1;		
		}
	if(flag==1)
		strcpy(ANS[i],"LuckyChef");
	else
		strcpy(ANS[i],"UnluckyChef");

	}

for(i=0;i<T;i++)
	printf("%s \n",ANS[i]);
}
		
