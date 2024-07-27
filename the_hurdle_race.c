#include <stdio.h>
#include <stdlib.h>
int main(){
	int N,x,i,y=0,max=0;
	printf("lutfen engel sayisini giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("sýçrama aralýgý nedir?");
	scanf("%d",&x);
	
	printf("engellerin uzunlugunu giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	max=A[0];
	for(i=0;i<N;i++){
		if(A[i]>max){
			max=A[i];
		}
	}
	if(max>x){
		y=max-x;
		printf("%d",y);
	}
	else{
		printf("%d",y);
		
	}
}
//kod calýstý
