#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int isFit(int k,int l,int ki,int li,int nk,int mk,int n,int m,int** arr,int** sarr);
int main(){
	int i,j,n,m,k,l;
	printf("");
	scanf("%d %d",&n,&m);
	
	int** arr;
	arr = (int**) malloc(sizeof(int*)*n);
	for(i=0;i<n;i++){
		arr[i] = (int*) malloc(sizeof(int)*m);
	}
			
	srand(0);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			arr[i][j]=rand()%9;
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("");
	scanf("%d %d",&k,&l);//7433
	
	int** s_arr;
	arr = (int**) malloc(sizeof(int*)*n);
	for(i=0;i<n;i++){
		arr[i] = (int*) malloc(sizeof(int)*m);
	}
	s_arr[0][0] = 7;
	s_arr[0][1] = 4;
	s_arr[1][0] = 3;
	s_arr[0][1] = 3;
	
	i = 0;
	j = 0;
	int Founded=0;
	while(i<n&& !Founded){
		i++;
		while(j<m && !Founded){
			j++;
			if(isFit(k,l,0,0,i,j,n,m,arr,s_arr)){
				printf("bulundu!!\n");
				Founded=1;
			}
		}
	}
	if(!Founded){
		printf("bulunamadi!!\n");
	}
}
int isFit(int k,int l,int ki,int li,int nk,int mk,int n,int m,int** arr,int** sarr){
	if(ki == k-1 && li == l){
		return 1;
	}
	if(li == l){
		li=0;
		ki++;
	}
	if(sarr[ki][li] == arr[ki+nk][li+mk]){
		li++;
		return isFit(k,l,ki,li,nk,mk,n,m,arr,sarr);
	}else{
		return 0;
	}
	
}
	
