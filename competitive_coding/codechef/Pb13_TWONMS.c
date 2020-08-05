#include<stdio.h>

void twonm(double A,double B,double N)
{
  int i,max,min;
  for(i=1;i<=N;i++)
    {
      if(i%2!=0)
        A = A*2;
      else
        B = B*2;
    }
  max = A>B?A:B;
  min = A<B?A:B;
  int value;
  value = max/min;
  printf("%d \n",value);
}
int main()
{
  int T;
  scanf("%d", &T);
  double A,B,N,i;
  for(i=0;i<T;i++)
    {
      scanf("%lf %lf %lf", &A, &B, &N);
      twonm(A,B,N);
    }
}
