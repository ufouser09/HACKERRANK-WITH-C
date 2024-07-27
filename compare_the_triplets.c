#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int A[3];
	int B[3];
	int K[2];
	
	for(i=0;i<2;i++){
		K[i]=0;
	}
	
	printf("birincinin puanlarini giriniz\n");
	for(i=0;i<3;i++){
		scanf("%d",&A[i]);
	}
	printf("ikincinin puanlarini girinzi\n");
	for(i=0;i<3;i++){
		scanf("%d",&B[i]);
	}
	
	for(i=0;i<3;i++){
		if(A[i]>B[i]){
			K[0]++;
		}
		else if(A[i]<B[i]){
			K[1]++;
		}
		
	}
	printf("diziyi yazdiriniz\n");
	for(i=0;i<2;i++){
		printf("%d",K[i]);
	}
	return 0;
	
}
