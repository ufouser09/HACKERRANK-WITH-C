#include <stdio.h>
#include <conio.h>
int main(){
	int N,i;
	char cc;
	int sum;
	
	printf("lutfen not sayisini giriniz\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("lutfen notlari giriniz\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	printf("lutfen bir karakter giriniz\n");
	cc=getche();
	
	
	sum=0;
	for(i=0;i<N;i++){
		if((cc=='b') && (i%2==0)){
			sum=sum+A[i];
		}
		else if((cc=='g')&& (i%2==1)){
			sum=sum+A[i];
		}
	}
	printf("\n%d",sum);
	
}
