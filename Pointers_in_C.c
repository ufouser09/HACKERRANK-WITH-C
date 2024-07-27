#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a,b;
	printf("lutfen birinci sayiyi giriniz\n");
	scanf("%d",&a);
	
	printf("lutfen ikinci sayiyi giriniz\n");
	scanf("%d",&b);
	
	
	update(&a,&b);
	printf("%d\n%d",a,b);
}
void update(int *a,int *b){
	int toplam;
	int fark;
	
	toplam=*a+*b;
	fark=abs(*a-*b);
	*a=toplam;
	*b=fark;
}
//kod calýsýyor
//a ve b degerlerini alýp yeni a degerini bu iki sayýnýn toplamý yeni b sayýsýný bu iki sayýsýnýn farký yapan kod
