#include<stdio.h>

int main()
{
  long int N,M,U,V;
  int i,steps=0;
  scanf("%ld %ld", &N, &M);
  int matrix[N][N] = {0};
  for(i=0;i<M;i++)
    {
      scanf("%ld %ld", &U, &V);
      matrix[U-1][V-1] = 1;
    }
  


}
