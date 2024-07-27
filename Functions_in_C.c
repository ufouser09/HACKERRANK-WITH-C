#include <stdio.h>
#include <stdlib.h>

int en_buyuk(int ,int ,int ,int );
int main(){
	int max;
	int a,b,c,d;
	
	printf("lutfen 4 tane sayi giriniz\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	max=en_buyuk(a,b,c,d);
	printf("en buyuk sayimiz %d",max);
}

int en_buyuk(int a,int b,int c,int d){
	int max;
	
	if(a>b){
		if(a>c){
			max=a;
		}
		else{
			max=c;
		}
	}else{
		if(b>c){
			max=b;
		}
		else {
			max=c;
		}
	}
	if(d>max){
		max=d;
	}
	return max;
	
}
//kod calýsýyor
//4 tane sayýdan en buyugunu recursive mantýkla donduren kod
