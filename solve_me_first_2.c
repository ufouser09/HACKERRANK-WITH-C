#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1,num2;
	int sum;
	printf("lutfen lutfen 2 tane sayi giriniz\n");
	scanf("%d %d",&num1,&num2);
	
	sum=0;
	if(num1<=1000 && num1>=1 && num2<=1000 && num2>=1){
		sum=num1+num2;
		printf("%d",sum);
	}
	return 0;
}
