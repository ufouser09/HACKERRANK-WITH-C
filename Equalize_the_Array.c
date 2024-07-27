#include <stdio.h>
#include <stdlib.h>
int recursive(int A[],int N);
int main(){
	int N,i;
	int sayi;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	
	int A[N];
	
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	sayi=recursive(A,N);
	printf("%d",sayi);
}
int recursive(int A[],int N){
	int i,j;
	int counter=0;
	int count=0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(A[i]==A[j]){
				counter++;
			}
		}
		if(counter==1){
			count++;
		}
		counter=0;
	}
	return count;
}
