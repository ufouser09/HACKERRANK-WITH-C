#include <stdio.h>
int main(){
	int i,N;
	printf("lutfen dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	int arr[N];
	
	printf("diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<N;i++){
		arr[i]=0;
	}
	
	for(i=0;i<N;i++){
		if(A[i]<38){
			arr[i]=A[i];
		}
		else{
			if((A[i]+1)%5==0){
				arr[i]=A[i]+1;
			}
			else if((A[i]+2)%5==0){
				arr[i]=A[i]+2;
			}
			else{
				arr[i]=A[i];
			}
		}
	}
	for(i=0;i<N;i++){
		printf("%d\n",arr[i]);
	}
}
