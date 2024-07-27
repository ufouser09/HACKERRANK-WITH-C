#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	
	int N;
	int top1=0,top2=0,i,j;
	int fark=0;
	printf("matrisin boyutlarini giriniz\n");
	scanf("%d",&N);
	
	int A[N][N];
	
	printf("lutfen degerleri giriniz\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
				top1=top1+A[i][j];
			}
			if(i+j==N-1){
				top2=top2+A[i][j];
			}
		}
	}
	fark=top1-top2;
	printf("%d",abs(fark));
}
