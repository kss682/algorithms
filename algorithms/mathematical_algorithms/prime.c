#include<stdio.h>
#include<stdbool.h>

int main(){
    int N,i,j;
    printf("Enter the Max number below for prime\n");
    scanf("%d", &N);   
    bool isprime[N];
    for(i = 0;i<N+1;i++){
        isprime[i] = true;
    }   
    isprime[0] = false;
    isprime[1] = false;
    for(i = 2;i<N+1;i++){
        if(isprime[i] == true){
            for(j = 2*i;j<N+1;j = j + i){
                isprime[j] = false;
            }
        }
    }
    for(i = 0;i<N+1;i++){
        if(isprime[i]==true)
            printf("%d ",i) ;
    }
}