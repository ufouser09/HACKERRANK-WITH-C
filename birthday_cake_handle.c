#include <stdio.h>
int main(){
	int N,i;
	int max_i,max;
	printf("lutfen mum sayisini giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("lutfen mum yüksekliklerini giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	max=A[0];
	max_i=1;
	for(i=1;i<N;i++){
		if(A[i]==max){
			max_i++;
		}
		else if(A[i]>max){
			max=A[i];
			max_i=1;
		}
	}
	printf("%d",max_i);
}
