#include<stdio.h>

int main()
{
  int N,r,R,i;
  scanf("%d %d", &N, &r);
  char ANS[N];
  for(i=0;i<N;i++)
    {
      scanf("%d", &R);
      if(R >= r)
        printf("Good boi\n");
      else
        printf("Bad boi\n");
    }
}
