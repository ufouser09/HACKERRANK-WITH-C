#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int T,M,S,O;
	int counter,i;
	int k=1;
	printf("lutfen test sayisini giriniz\n");
	scanf("%d",&T);
	
	int A[T];
	
	
	
	k=0;
	while(k!=T){
		
	
	printf("lutfen mahkum sayisini giriniz\n");
	scanf("%d",&M);
		
	printf("lutfen seker sayisini giriniz\n");
	scanf("%d",&S);
	
	printf("lutfen kacýncý sýradan baslanýlacagýný giriniz\n");
	scanf("%d",&O);
		
		
		counter=O;
		counter--;
		for(i=0;i<S;i++){
			counter++;
			if(counter==M+1){
				counter=1;
			}
			printf("%d",counter);
		}
		A[k]=counter-1;
		k++;
		
	}
	for(i=0;i<T;i++){
		printf("%d\n",A[i]);
	}
	return 0;
}
