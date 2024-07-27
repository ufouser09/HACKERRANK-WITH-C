#include <stdio.h>
#include <stdlib.h>
int main(){
	int *dizi;
	char ch[]={};
	int toplam=0;
	int N;
	int i;
	
	printf("lutfen N sayisini giriniz\n");
	scanf("%d",&N);
	
	printf("lutfen g ya da b giriniz\n");
	scanf("%c",ch);
	
	dizi=(int*)calloc(N,sizeof(int));
	printf("lutfen diziyi giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&dizi[i]);
	}
	
	
	for(i=0;i<N;i++){
		if(dizi!=NULL){
			
			if(ch=='g'){
				
				if(i%2==0){
					
					toplam=toplam+dizi[i];
				}
			}
			else{
				if(i%2==1){
					toplam=toplam+dizi[i];
				}
			}
		}else{
			printf("error!");
		}
	}
	
	printf("%d",toplam);
}
