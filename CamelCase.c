#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char dizi[99999];
    int i,durum;
    printf("lutfen diziyi giriniz\n");
    scanf("%s",dizi);

    i=0;
    durum=1;
    while(dizi[i]!='\0'){
        if(dizi[i]<='Z'&& dizi[i]>='A'){
            durum++;
        }
        i++;
    }
    printf("%d",durum);
}
