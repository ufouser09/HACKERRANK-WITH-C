#include <stdio.h>
int main(){
	int j,N,i;
	int topla;
	int max,min;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
		printf("diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	j=0;
	max=-1;
	min=1000;
	
	while(j<N){
	topla=0;
	for(i=0;i<N;i++){
		
		
		topla=topla+A[i];
	}
		topla=topla-A[j];
		if(topla>max){
			max=topla;
		}
		else if(topla<min){
			min=topla;
		}
		j++;
	}
	printf("%d %d",min,max);
	
}
	
	
	

