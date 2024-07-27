#include <stdio.h>
#include <stdlib.h>
int main(){
	int N;
	int i;
	float plus,minus,zero;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	plus=0;
	minus=0;
	zero=0;
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N;i++){
	
			if(A[i]<0){
				minus++;
			}
			else if(A[i]>0){
				plus++;
			}
			else {
				zero++;
			}
		}
	
	
	if(zero!=0){
		zero=(float)zero/N;
	}
	if(plus!=0){
		plus=(float)plus/N;
	}
	if(minus!=0){
		minus=(float)minus/N;
}
	
	
	
	printf("%f\n%f\n%f\n",plus,minus,zero);
	
}
