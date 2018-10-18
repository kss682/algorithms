/*
To print the index of the last occurence 
of the element in the array
*/ 



#include<stdio.h>



int main()
{
long int N,M,index=-1,i;
scanf("%ld %ld",&N,&M);
long int A[N];
for(i=0;i<N;i++)
    scanf("%ld ",&A[i]);
for(i=0;i<N;i++)
    {
        if(A[i]==M)
            index=i;
    }
index++;
printf("%ld",index);    
return 0;
}
