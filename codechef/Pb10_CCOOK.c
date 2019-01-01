#include<stdio.h>

void output(int count)
{
  switch (count) {
    case 0 : printf("Beginner\n");
              break;
    case 1 : printf("Junior Developer \n");
              break;
    case 2 : printf("Middle Developer \n");
                      break;
    case 3 : printf("Senior Developer \n");
                      break;
    case 4 : printf("Hacker \n");
                      break;
    case 5 : printf("Jeff Dean \n");
                      break;
  };

}

int main()
{
  int N,i,count,j;
  scanf("%d",&N);
  int Arr[5];
  for(i=0;i<N;i++)
    { count = 0;
      for(j=0;j<5;j++)
        {
          scanf("%d",&Arr[j]);
          if(Arr[j] == 1)
            count++;
        }
      output(count);

    }
}
