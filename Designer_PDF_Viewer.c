//KOD ÇALISIYOR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int freq[26]={0};
	char ch[25];
	int N,max,i,index;
	
	
	printf("lutfen harflerin frekanslarini giriniz\n");
	for(i=0;i<26;i++){
		scanf("%d",&freq[i]);
	}
	
	printf("lutfen bir kelime giriniz\n");
	scanf("%s",ch);
	
	N=strlen(ch);
	
	max=0;
	i=0;
	while(ch[i]!='\0'){
		index=(int)ch[i]-(int)'a';
		if(freq[index]>max){
			max=freq[index];
		}
		i++;
	}
	printf("%d",N*max);
	
}
