#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    
    int i,index,eksiklik,ekleme;
    int uzunluk;
    int N;
    int index1=0,index2=0,index3=0,index4=0;
    //printf("lutfen dizinin uzunlugunu giriniz\n");
    scanf("%d",&N);
    char dizi[N];
    //printf("lutfen diziyi giriniz\n");
    scanf("%s",dizi);

    i=0;
    index=0;
    uzunluk=strlen(dizi);
    while(dizi[i]!='\0'){
        if(dizi[i]>='0' && dizi[i]<='9'){
            index1=1;
            //printf("q1");
        }
        else if(dizi[i]>='a' && dizi[i]<='z'){
            index2=1;
            //printf("q2");
        }
        else if(dizi[i]>='A' && dizi[i]<='Z'){
            index3=1;
            //printf("q3");
        }
        else{
            index4=1;
            //printf("q4");
        }
        i++;
    }
    
    index=index1+index2+index3+index4;
    index=4-index;
    //printf("%d\n",index);
    ekleme=uzunluk+index;
    if(ekleme<6){
    	//printf("1");
    	ekleme=6-uzunluk;
    	printf("%d",ekleme);
	}
	else{
		//printf("2");
		printf("%d",index);
	}
    
}
