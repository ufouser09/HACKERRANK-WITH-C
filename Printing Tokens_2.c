#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *text;
	int i,N;

	text=(char*)malloc(sizeof(char));
	printf("lutfen bir string giriniz\n");
	scanf("%[^\n]s", text);
	
	N=sizeof(text);
	text=(char*)realloc(text,N*sizeof(char));
	
	
	
	
	i=0;
	while(text[i]!='\0'){
		if(text[i]!=32){
		
			printf("%c",text[i]);
		
	}
		if(text[i]==32){
			printf("\n");
		}
		i++;
	
	}
	
	
	 
	 
}
