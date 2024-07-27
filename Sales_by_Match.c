#include <stdio.h>
#include <stdlib.h>
int main(){
	int freq[101]={0};
	int counter=0,i,N;
	printf("lutfen kac tane sayi giriceginizi giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		freq[A[i]]++;
	}
	for(i=0;i<=100;i++){
		if(freq[i]>1){
			counter=counter+(freq[i]/2);
		}
	}
	printf("%d",counter);
}
