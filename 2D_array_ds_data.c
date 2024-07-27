//KOD ÇALIÞIYOR...
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int A[6][6];
	int i,j;
	int max,sum=0;
	
	printf("matrisi giriniz\n");
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			scanf("%d",&A[i][j]);
		}
	}
	max=-100;
	for(i=1;i<5;i++){
			
		for(j=1;j<5;j++){
			sum=A[i][j]+A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1];
			
			if(sum>=max){
			max=sum;
		}
		sum=0;
		}
		
		
		
		
		
	
	}
	printf("%d",max);
	
}
