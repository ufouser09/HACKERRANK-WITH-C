#include <stdio.h>
int main(){
	int i,j;
	int a[3];
	int b[3];
	int c[2]={0};
	
	printf("lutfen alice ýn puanlarýný giriniz\n");
	for(i=0;i<3;i++){
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("lutfen bobun puanlarýný giriniz\n");
	for(i=0;i<3;i++){
		printf("b[%d]=",i+1);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<3;i++){
		if(a[i]>b[i]){
			c[0]++;
		}
		else if(a[i]<b[i]){
			c[1]++;
		}
	}
	for(i=0;i<2;i++){
		printf("%d\t",c[i]);
	}
	
	
	
}
