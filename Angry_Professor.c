#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct dizi{
	char data[100];
}NODE;
int main(){
	NODE *dizi;
	
	int a,N,i,k,count,j,l;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	dizi=(NODE*)malloc(a*sizeof(NODE));
	
	
	for(l=0;l<a;l++){
		count=0;
		printf("lutfen toplam ogrenci sayisini giriniz\n");
		scanf("%d",&N);
		printf("lutfen esik sayisini giriniz\n");
		scanf("%d",&k);
		int A[N];
		
		for(j=0;j<N;j++){
			scanf("%d",&A[i]);
		}
		for(i=0;i<N;i++){
			if(A[i]<=0){
				count++;
			}
		}
		if(count>=k){
		strcpy(dizi[l].data,"YES");
		}
		else{
			strcpy(dizi[l].data,"NO");
		}
	}
	for(i=a-1;i>=0;i--){
		printf("%s\n",dizi[i].data);
	}
}
