#include <stdio.h>
#include <stdlib.h>
int main(){
	int N;
	int toplam;
	
	printf("lutfen 5 basamakli sayi giriniz\n");
	scanf("%d",&N);
	
	toplam=0;
	while(N!=0){
		toplam=toplam+N%10;
		N=N/10;
		
	}
	printf("%d",toplam);
}
//5 basamaklý girilen bir sayýnýn basamaklarý toplamýný bulma.
//kod calýsýyor.
