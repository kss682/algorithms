#include<stdio.h>

int main()
{
  long T,N,A,B,K,i,j,count;
  scanf("%ld",&T);
  for(i = 0;i<T;i++)
    { count = 0;
      scanf("%ld %ld %ld %ld", &N, &A, &B, &K);
      for(j = 1;j <= N;j++)
        {
          if(j%A == 0 && j%B != 0 || j%B == 0 && j%A != 0) count++;
        }
      if(count >= K)
        printf("Win\n");
      else
        printf("Lose\n");
    }
  return 0;
}
