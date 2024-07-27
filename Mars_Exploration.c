#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    char string[9999];
    int durum;
    int i,length=0;
    //printf("lutfen diziyi giriniz\n");
    scanf("%s",string);

    length=strlen(string);
    char input[length];
    for(i=0;i<length;i=i+3){
        input[i]='S';
        input[i+1]='O';
        input[i+2]='S';
    }
    input[length]='\0';

    durum=0;
    for(i=0;i<=length;i++){
        if(input[i]!=string[i]){
            durum++;
        }
    }
    //printf("%s\n",input);
    printf("%d",durum);

    
}


//bunda hata çýktý digerinde çýkmadý

