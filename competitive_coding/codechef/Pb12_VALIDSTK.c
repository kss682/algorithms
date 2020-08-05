#include<stdio.h>

void stack()
{
  int N,i,op,stk=0,flag=0;
  scanf("%d", &N);
  for(i=0;i<N;i++)
    {
      scanf("%d",&op);
      if(op == 1)
        stk++;
      else if(op == 0 && stk>0)
        stk--;
      else if(op == 0 && stk<=0)
        {
          flag = 1;

        }
    }
  if (flag == 0) printf("Valid\n");
  else printf("Invalid\n");
}
int main()
{
  int T,i;
  scanf("%d", &T);
  for(i=0;i<T;i++)
    {
      stack();
    }
}
