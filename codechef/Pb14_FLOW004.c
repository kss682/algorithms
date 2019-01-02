#include<stdio.h>

void func(unsigned long int N){
  int ldigit,fdigit,sum;
  fdigit = N%10;
  while(N!=0)
  {
    ldigit = N%10;
    N = N/10;
  }
  sum = fdigit + ldigit;
  printf("%d\n",sum);
}

int main()
{
  int T,i;
  unsigned long N;
  scanf("%d", &T);
  for(i=0;i<T;i++)
    {
      scanf("%ld", &N);
      func(N);
    }
}
