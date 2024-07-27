#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	float c,d;
	
	printf("lutfen 2 tane int sayi giriniz\n");
	scanf("%d %d",&a,&b);
	
	
	printf("lutfen 2 tane float sayi giriniz\n");
	scanf("%f %f",&c,&d);
	
	printf("%d %d\n",(a+b),(a-b));
	printf("%.1f %.1f",(c+d),(c-d));
}
