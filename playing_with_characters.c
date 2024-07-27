#include <stdio.h>
#include <string.h>
int main(){
	char ch;
	char s[100];
	char sen[100];
	
	
	scanf("%c",&ch);
	
	
	scanf("%s",&s);
	
	
	scanf("%[^\n]*c",&sen);
	
	printf("%c\n%s\n%s",ch,s,sen);
	
	/*
	printf("%c",c);
	printf("\n%s",s);
	printf("\n%s",sen);
	*/
	
	
}
