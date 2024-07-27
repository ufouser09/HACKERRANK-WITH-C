#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,N,M;
	int max,min;
	int counter,counter2,counter3=0;
	printf("birinci dizinin eleman sayisi kactir\n");
	scanf("%d",&N);
	
	
	printf("lutfen 2.dizinin eleman sayisi kactýr\n");
	scanf("%d",&M);
	
	int A[N],B[M];
	
	printf("birinci diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	printf("ikinci diziyi giriniz\n");
	for(i=0;i<M;i++){
		scanf("%d",&B[i]);
	}
	max=A[0];
	for(i=1;i<N;i++){
		if(A[i]>max){
			max=A[i];
		}
	}
	min=B[0];
	for(i=0;i<M;i++){
		if(B[i]<min){
			min=B[i];
		}
	}
	
	
	while(max<=min){
	
	counter=0;
	for(i=0;i<N;i++){
		if(max%A[i]==0){
			counter++;
		}
		
	}
	
	if(counter==N){
		counter2=0;
		for(i=0;i<M;i++){
			if(B[i]%max==0){
				counter2++;
			}
		}
		if(counter2==M){
			counter3++;
		}
	}
	max++;
}
printf("%d",counter3);

}
//kod calisiyor.
