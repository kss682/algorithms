// https://codeforces.com/problemset/problem/118/A
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int check_vowel(char ch){
	int flag = 0;
	switch(ch){
		case 'a' : flag =1;
			   break;
		case 'e' : flag =1;
			   break;
		case 'i' : flag =1;
			   break;
		case 'o' : flag =1;
			   break;
		case 'u' : flag =1;
			   break;
		case 'y' : flag =1;
			   break;
	}
	return flag;
}

void transform(char string[]){
	char ans[100],temp;
	int i = -1,length,flag=-1,j=0;
	length = strlen(string);
	while(i <= length-2){
		temp = tolower(string[i+1]);
		printf("%c",temp);	 	
		flag = check_vowel(temp);
		if(flag == 0){
			ans[j++] = '.';
			ans[j++] = temp;
		}		
		i++;	
	}
	ans[j] = '\0';
	printf("%s",ans);
}
int main(){
	char string[100];
	scanf("%s",string);
	transform(string);
}
