#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr;
	int N;
	int tmp;
	int i;
	printf("lutfen kac adet sayi girmek istiyorsunuz\n");
	scanf("%d",&N);
	
	arr=(int*)malloc(N*sizeof(int));
	if(arr!=NULL){
		for(i=0;i<N;i++){
			scanf("%d",&arr[i]);
		}
	}else{
		printf("error!");
	}
	
	for(i=0;i<N/2;i++){
		tmp=arr[i];
		arr[i]=arr[N-i-1];
		arr[N-i-1]=tmp;
	}
	for(i=0;i<N;i++){
		printf("%d\t",arr[i]);
	}
}
