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
//kod cal�s�yor
//a ve b degerlerini al�p yeni a degerini bu iki say�n�n toplam� yeni b say�s�n� bu iki say�s�n�n fark� yapan kod
