#include<stdio.h>
#include<string.h>
#define MAX 100000

void main()
{
char str[MAX];
int count=1,i=0;
scanf("%s",str);
while(str[i]!='\0')
	{if(str[i]>='A' && str[i]<='Z')
		count+=1;
	i++;
	}
printf("%d",count);
}

