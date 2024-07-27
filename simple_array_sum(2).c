#include <stdio.h>
#include <stdlib.h>
int main(){
	int N,toplam=0,i;
	
	printf("lutfen dizinin uzunlugunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		toplam=toplam+A[i];
	}
	printf("%d",toplam);
}
