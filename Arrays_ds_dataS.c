#include <stdio.h>
#include <stdlib.h>
int main(){
	int N,i;
	printf("lutfen dizinin uzunlugunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=N-1;i>=0;i--){
		printf("%d\t",A[i]);
	}
	return 0;
}
