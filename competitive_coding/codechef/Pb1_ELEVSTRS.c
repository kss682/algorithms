/*
Chef has been working in a restaurant which has N floors. He wants to minimize the time it takes him to go from the N-th floor to ground floor. He can either take the elevator or the stairs.

The stairs are at an angle of 45 degrees and Chef's velocity is V1 m/s when taking the stairs down. The elevator on the other hand moves with a velocity V2 m/s. Whenever an elevator is called, it always starts from ground floor and goes to N-th floor where it collects Chef (collecting takes no time), it then makes its way down to the ground floor with Chef in it.
The elevator cross a total distance equal to N meters when going from N-th floor to ground floor or vice versa, while the length of the stairs is sqrt(2) * N because the stairs is at angle 45 degrees.

Chef has enlisted your help to decide whether he should use stairs or the elevator to minimize his travel time. Can you help him out
*/

#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
int i,T,N,V1,V2;
scanf("%d", &T);
char ANS[T][10];
for(i=0;i<T;i++)
	{scanf("%d %d %d", &N, &V1, &V2);
	if(V2>sqrt(2)*V1)
		{
		strcpy(ANS[i],"Elevator");
		}
	else
		{
		strcpy(ANS[i],"Stairs");
		}
	}
for(i=0;i<T;i++)
	printf("%s \n",ANS[i]);
}
