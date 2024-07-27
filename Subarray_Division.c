#include <stdio.h>
#include <stdlib.h>
int main(){
	int N,i,j,k;
	int a,b;
	int toplam=0;
	int counter=0;
	printf("lutfen kac tane sayi giriceginizi giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	printf("lutfen sayilari giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	printf("lutfen 2 tane sayi giriniz\n");
	scanf("%d %d",&a,&b);
	
	
	
	i=0;
	while(i<N){
		toplam=0;
		for(j=0;j<b;j++){
			
			toplam=toplam+A[i];
			
		i++;
		}
	
		
		if(toplam==a){
			counter++;
		}
		i--;
	}

	printf("%d",counter);
	
}
