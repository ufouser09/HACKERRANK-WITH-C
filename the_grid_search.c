#include <stdio.h>
int main(){
	int k,N,M,i,j,A,B;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d %d",&N,&M);
	
	int array[N][M];
	
	printf("lutfen matrisi giriniz\n");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",&array[i][j]);
		}
	}
	printf("lutfen ikinci matrisin satir ve sutununu giriniz\n");
	scanf("%d %d",&A,&B);
	
	int array2[A][B];
	
	printf("lutfen ikinci matrisi giriniz\n");
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			scanf("%d",&array2[i][j]);
		}
	}
	k=0;
	for(i=0;i<A;i++){
		for(j=0;j<B;j++){
			dizi[k]=array2[i][j];
			k++;
		}
	}
	k=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(A[i][j]==dizi[k]){
				k++;
				count++;
			}
			else{
				count=0;
			}
			if(count==B){
				
			}
		}
	}
	
	
	
	
	
}
