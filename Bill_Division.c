#include <stdio.h>
#include <stdlib.h>
int main(){
	int N,i,toplam=0;
	int a,k;
	printf("lutfen kac tane sayi giriceginizi giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	printf("lutfen neyi odemediginiz giriniz\n");
	scanf("%d",&k);
	
	
	
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	printf("lutfen tahmin edileni giriniz\n");
	scanf("%d",&a);
	
	
	
	for(i=0;i<N;i++){
		if(i!=k){
			toplam=toplam+A[i];
		}
	}
	toplam=toplam/2;
	if(a==toplam){
		printf("Bon Appetit");
		
	}
	else{
		printf("%d",a-toplam);
	}
	
}
