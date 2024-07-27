#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,a,b;
	int i;
	printf("lutfen 2 tane sayi giriniz\n");
	scanf("%d %d",&a,&b);
	
	for(n=a;n<=b;n++){
		if(n==1){
		printf("one\n");
	}
	else if(n==2){
		printf("two\n");

	}
	else if(n==3){
		printf("three\n");
	}
	else if(n==4){
		printf("four\n");
	}
	else if(n==5){
		printf("five\n");
	}
	else if(n==6){
		printf("six\n");
	}
	else if(n==7){
		printf("seven\n");
	}
	else if(n==8){
		printf("eight\n");
	}
	else if(n==9){
		printf("nine\n");
	}
	}
	if(b>9){
	
	
	for(i=10;i<=b;i++){
		if(i%2==0){
			printf("even\n");
			
		}
		else{
			printf("odd\n");
		}
	}
}
}
