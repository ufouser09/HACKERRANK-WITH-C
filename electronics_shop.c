#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,N,M,i,j,max;
	printf("lutfen butceyi giriniz\n");
	scanf("%d",&x);
	
	printf("lutfen keyboard çeþidini giriniz\n");
	scanf("%d",&N);
	
	printf("lutfen drive çeþidini giriniz\n");
	scanf("%d",&M);
	
	int A[N];
	printf("keyboardlari giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	int B[M];
	printf("drivelari giriniz\n");
	for(i=0;i<M;i++){
		scanf("%d",&B[i]);
	}
	max=-1;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(A[i]+B[i]<=x){
				if(A[i]+B[i]>max){
					printf("%d %d\n",A[i],B[i]);
					max=A[i]+B[i];
				}
			}
		}
	}
	printf("%d",max);
}
