#include <stdio.h>
#include <stdlib.h>
int main(){
	int N,i;
	printf("dizinin boyutunu giriniz\n");
	scanf("%d",&N);
	
	int dizi[N];
	int freq[9];
	for(i=0;i<N;i++){
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<=9;i++){
		freq[i]=0;
	}
	
	
	for(i=0;i<N;i++){
		
		if(dizi[i]<=9 && dizi[i]>=0){
		
		freq[dizi[i]]++;
	}
}
for(i=0;i<=9;i++){
	printf("%d\t",freq[i]);
}
}
