#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,i,j;
	int Dsayisi,Boy;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(j=0;j<N;j++){
		
		Dsayisi=A[j];
		Boy=1;
		for(i=0;i<Dsayisi;i++){
			if(i%2==0){
				Boy=2*Boy;
			}
			else{
				Boy++;
				
			}
		}
		printf("%d\n",Boy);
	}
}
//KOD DOGRU
