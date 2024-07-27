#include <stdio.h>
int main(){
	int i,N;
	int minus,plus,zero;
	float A1,A2,A3;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	minus=0;
	plus=0;
	zero=0;
	for(i=0;i<N;i++){
		if(A[i]>0){
			plus++;
		}
		else if(A[i]<0){
			minus++;
		}
		else{
			zero++;
		}
	}
	A1=(float)plus/N;
	A2=(float)minus/N;
	A3=(float)zero/N;
	
	printf("%f\n%f\n%f\n",A1,A2,A3);
}
