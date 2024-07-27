#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int N,i;
	int toplam;
	
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	toplam=0;
	for(i=0;i<N;i++){
		toplam+=A[i];
	}
	printf("%d",toplam);
	
	
	
}
