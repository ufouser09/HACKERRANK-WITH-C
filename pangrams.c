#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    char *string;
    int length,i;
    int kontrol;
    string=(char*)malloc(1000*sizeof(char));
    printf("lutfen stringi giriniz\n");
    scanf("%s",string);
    length=strlen(string);

    kontrol=1;
    i=0;
    while(kontrol==1 && i<length){
        
            if(!((string[i]==32)||(string[i]<='z' && string[i]>='a')||(string[i]<='Z' && string[i]>='A'))){
                kontrol=0;
                printf("girdi\n");
            }
            printf("%d\n",i);
        i++;
    }
    if(i!=length){
        printf("not pangram\n");

    }else{
        printf("pangram\n");
    }
}
