#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int i,j;
	int a,b;
	int N,M;
	int toplam=0;
	printf("lutfen matrisin boyutlarýný giriniz\n");
	scanf("%d %d",&N,&M);
	
	int A[N][M];
	
	printf("lutfen degerleri giriniz\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",&A[i][j]);
		}
	}
	a=0;
	b=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(i==j){
				a=a+A[i][j];
			}
			if(i+j==N-1){
				b=b+A[i][j];
			}
		}
	}
	toplam=abs(a-b);
	printf("%d",toplam);
	
}
