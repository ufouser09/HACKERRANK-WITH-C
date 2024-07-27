#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,i,toplam;
	
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		printf("A[%d]=",i+1);
		scanf("%d",&A[i]);
	}
	toplam=0;
	for(i=0;i<N;i++){
		toplam=toplam+A[i];
	}
	printf("%d\n",toplam);
	
}
