#include<stdio.h>
#include<string.h>
#define MAX 100

int hash(char name[],char name_array[MAX][MAX])
{
int index=0,i=0;
while(name[i]!='\0')
	{index+=(i+1)*name[i];
	i+=1;
	}
index=index%MAX;
while(name_array[index][0]!='\0')
	{index=(index+1)%MAX;
	}

return index;
}



void main()
{
int n,i,phone_array[MAX]={0*MAX},index;
char name[MAX],name_array[MAX][MAX];
for(i=0;i<MAX;i++)
	name_array[i][0]='\0';
printf("\n enter no of elements \n");
scanf("%d",&n);
for(i=0;i<n;i++)
	{printf("\nenter the name\n");
	scanf("%s",name);
	index=hash(name,name_array);
	strcpy(name_array[index],name);
	printf("enter the no:\n");
	scanf("%d",&phone_array[index]);
	}
printf("\n__________\n");
for(i=0;i<MAX;i++)
	{printf("|  %s  |  %d  |\n", name_array[i],phone_array[i]);

	}
}
