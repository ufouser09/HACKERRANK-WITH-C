#include <stdio.h>
#include <math.h>
int main(){
	int N,i,j,A1,B1,toplam;
	printf("lutfen matrisin satir ve sutun sayisini giriniz\n");
	scanf("%d",&N);
	
	int A[N][N];
	printf("lutfen matrisi giriniz\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("A[%d][%d]=",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("matris\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d",A[i][j]);
			
		}
		printf("\n");
	}
	
	A1=0;
	B1=0;
	toplam=0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
				A1=A1+A[i][j];
			}
			if(i+j==N-1){
				B1=B1+A[i][j];
			}
		}
	}
	toplam=abs(A1-B1);
	printf("%d",toplam);
}
