#include <stdio.h>
#include <string.h>
int main(){
	char dizi[50];
	printf("lutfen bir dizi giriniz\n");
	scanf("%[^\n]s",dizi);
	
	printf("Hello, World!\n%s",dizi);
}
