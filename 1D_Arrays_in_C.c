#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr;
	int toplam;
	int i;
	int N;
	printf("lutfen N sayisini giriniz\n");
	scanf("%d",&N);
	
	arr=(int*)malloc(N*sizeof(int));
	
	toplam=0;
	if(arr!=NULL){
		for(i=0;i<N;i++){
			
			scanf("%d",&arr[i]);
			toplam=toplam+arr[i];
		}
	}else{
		printf("error!");
	}
	printf("%d",toplam);
}
