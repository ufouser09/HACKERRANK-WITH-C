#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int toplam(int ,int );
int main(){
	int a,b;
	int sonuc;
	printf("lutfen iki tane sayi giriniz\n");
	scanf("%d %d",&a,&b);
	
	sonuc=toplam(a,b);
	
	printf("%d",sonuc);
	
}
int toplam(int sayi1,int sayi2){
	int sonuc;
	sonuc=sayi1+sayi2;
	return sonuc;
}
