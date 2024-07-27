#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    char *string;
    int i,durum;
    string=(char*)malloc(1000*sizeof(char));
    printf("lutfen stringi giriniz\n");
    scanf("%s",string);

    int uppercase[26];
    int lowercase[26];
    for(i=0;i<26;i++){
        uppercase[i]=0;
    }
    for(i=0;i<26;i++){
        lowercase[i]=0;
    }
    int dec;
    i=0;
    
    while(string[i]!='\0'){
        dec=(int)string[i];
        if(dec>=65 && dec<=90){
            uppercase[dec-65]=1;
        }else if(dec==32){
            printf("bosluk");
        }else if(dec>=97 && dec<=122){
        	lowercase[dec-97]=1;
		}
		printf("%d",i);
	i++;
    }
    durum=1;
    for(i=0;i<26;i++){
        if(uppercase[i]!=1 && lowercase[i]!=1){
            durum=0;
        }
    }
    if(durum==1){
        printf("pangram");
    }else{
        printf("not pangram");
    }
}
