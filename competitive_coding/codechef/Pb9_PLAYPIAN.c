#include<stdio.h>
#include<string.h>
void SCORE(char s[])
{
  int i,len,score = 0,flag = 0;
  len = strlen(s);
  for(i = 0;i<len;i++)
    {
      if(s[i] == 'A')
        score++;
      else if(s[i] == 'B')
        score--;
      if(score>1 || score<-1)
        {
          flag = 1;
          break;
        }
    }
  if(flag == 0)
      printf("yes\n");
  else
      printf("no\n");

}

int main()
{
  int T,i;
  scanf("%d",&T);
  char s[100];
  for(i = 0;i < T;i++)
    {
      scanf("%s",s);
      SCORE(s);
    }
}
