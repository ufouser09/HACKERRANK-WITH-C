#include <stdio.h>
#include <stdlib.h>
int main(){
	int N,i,ori,counter,hane;
	printf("lutfen girilecek sayi sayisini giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("lutfen sayilari giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
		ori=A[i];
		counter=0;
		while(ori!=0){
			hane=ori%10;
			if(hane!=0){
				
			
			if(A[i]%hane==0){
				counter++;
			}
		}
			ori=ori/10;
		}
		printf("%d\n",counter);
	}
}
