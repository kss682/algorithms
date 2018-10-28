/*
Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year.

SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.
*/


#include<stdio.h>
#include<string.h>


int main()
{
int i,T,N;
scanf("%d", &T);
char ANS[T][20];
for(i=0;i<T;i++)
	{scanf("%d", &N);
	if(N<=2019 && N>=2010)
		{if(N!=2018)
			strcpy(ANS[i],"HOSTED");
		else
			strcpy(ANS[i],"NOT HOSTED");
		}
	else
		strcpy(ANS[i],"NOT HOSTED");
	}
for(i=0;i<T;i++)
	printf("%s \n", ANS[i]);

}
