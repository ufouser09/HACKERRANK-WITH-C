#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int N,i,j;
	int counter;
	int max=0,x=0;
	printf("lutfen dizinin uzunlugunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	int B[N];
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<N;i++){
		counter=0;
		for(j=0;j<N;j++){
		
			if((A[i]==A[j])||(A[i]+1==A[j])){
				counter++;
				
			}
			B[i]=counter;
			
		}
	}
	max=B[0];
	for(i=0;i<N;i++){
		if(max<B[i]){
			max=B[i];
		}
	}
	printf("%d",max);
	return 0;
	
}
//kod calýþtý
