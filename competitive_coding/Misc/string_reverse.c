#include<stdio.h>
#include<string.h>

void reverse(char str[],int i){
	if(str[i] == '\0'){
		return;
	}
	else{
		reverse(str,i+1);
		printf("%c",str[i]);	
	}
}

int main(){

	char str[100];
	int i=0;
	scanf("%s",str);
	reverse(str,i);
	printf("\n");
}
