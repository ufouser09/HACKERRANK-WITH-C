#include <stdio.h>
#include <stdlib.h>
int main(){
	int N,k,l,i,j,s;
	int count,max;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	max=0;
	
	int B[100*N];
	
	int *A=malloc(sizeof(int)*N);
	
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<100*N;i++){
		B[i]=0;
	}
	for(i=0;i<N;i++){
		B[A[i]]++;
	}
	int min = 0;
	for(i=1;i<N;i++){
		if(B[i]>B[min])
			min=i;
	}
	printf("%d",min);
}
