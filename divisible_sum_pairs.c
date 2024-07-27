#include <stdio.h>
int main(){
	int N,i,j;
	int k,count;
	
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	printf("lutfen k sayisini giriniz\n");
	scanf("%d",&k);
	
	int A[N];
	
		printf("lutfen diziyi giriniz\n");
		for(i=0;i<N;i++){
			scanf("%d",&A[i]);
		}
	
	
	count=0;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
		if((A[i]+A[j])%k==0){
			printf("%d %d\n",A[i],A[j]);
			count++;
		}	
		}
		
	}
	printf("%d\n",count);
	return 0;
}
