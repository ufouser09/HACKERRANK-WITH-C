#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char text[1000000];
	int i,N;

	
	printf("lutfen bir string giriniz\n");
	scanf("%[^\n]s", text);
	
	
	
	
	
	i=0;
	while(i!=strlen(text)){
		if(text[i]!=32){
		
			printf("%c",text[i]);
		
	}
		if(text[i]==32){
			printf("\n");
		}
		i++;
	
	}
	
	
	 
	 
}
