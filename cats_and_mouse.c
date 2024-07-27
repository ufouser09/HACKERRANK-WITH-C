#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int N,i,x,y;
	printf("lutfen sorgu sayýsýný giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	int B[N];
	int C[N];
	
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		scanf("%d",&B[i]);
		scanf("%d",&C[i]);
	}
	for(i=0;i<N;i++){
		x=abs(A[i]-C[i]);
		y=abs(B[i]-C[i]);
		if(x==y){
			printf("Mouse C\n");
		}
		else if(x<y){
			printf("Cat A\n");
		}
		else{
			printf("Cat B\n");
		}
	}
	return 0;
}
