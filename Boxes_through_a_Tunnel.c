#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int length,width,height;
}NODE;
int kucuk_mu(NODE dizi);
int get_value(NODE dizi);
int main(){
	NODE *dizi;
	
	int N,i;
	int toplam;
	printf("lutfen kac tane giriceginizi giriniz\n");
	scanf("%d",&N);
	dizi=(NODE*)calloc(N,sizeof(NODE));
	for(i=0;i<N;i++){
		scanf("%d %d %d",&dizi[i].width,&dizi[i].length,&dizi[i].height);
	}
	/*
	for(i=0;i<N;i++){
		printf("%d %d %d\n",dizi[i].height,dizi[i].length,dizi[i].width);
	}
	*/
	for(i=0;i<N;i++){
		if(kucuk_mu(dizi[i])){
			
			printf("%d\n",get_value(dizi[i]));
		}
	}
	return 0;
}

int kucuk_mu(NODE dizi){
	//printf("1\n");
	if(dizi.height<41){
		return 1;
	}
	return 0;
}
int get_value(NODE dizi){
	//printf("2\n");
	return dizi.height*dizi.length*dizi.width;
}

