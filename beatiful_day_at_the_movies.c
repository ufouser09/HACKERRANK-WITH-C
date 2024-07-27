#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    int k;
    int i;
    int temp,digit,hane,durum;
    printf("lutfen 2 tane sayi giriniz\n");
    scanf("%d %d",&a,&b);

    printf("lutfen bolen sayiyi giriniz\n");
    scanf("%d",&k);

    durum=0;
    for(i=a;i<=b;i++){
        temp=i;
        hane=0;

        while(temp>0){
            digit=temp%10;
            hane=hane*10+digit;
            temp=temp/10;

        }
        if(((i-hane)%k==0)||(i==hane)){
        	//printf("%d",i);
            durum++;
        }


    }
    printf("%d",durum);
}
