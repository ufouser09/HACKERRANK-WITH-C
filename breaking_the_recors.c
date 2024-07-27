#include <stdio.h>
int main(){
	int i,min,max,min_i,max_i,N;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	min=A[0];
	min_i=0;
	max=A[0];
	max_i=0;
	for(i=1;i<N;i++){
		if(A[i]>max){
			max=A[i];
			max_i++;
			
		}
		else if(A[i]<min){
			min=A[i];
			min_i++;
			
		}
	}
	printf("%d %d",max_i,min_i);
}
