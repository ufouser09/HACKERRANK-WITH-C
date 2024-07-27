#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int a[2];
	int b[2];
	int alc=0;
	int bob=0;
	int i;
	
	printf("lutfen alice'in puanlarini giriniz\n");
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	
	printf("lutfen bob'un puanlarini giriniz\n");
	scanf("%d %d %d",&b[0],&b[1],&b[2]);
	
	for(i=0;i<3;i++){
		if(a[i]>b[i]){
			alc++;
		}
		else if(a[i]<b[i]){
			bob++;
		}
	}
	printf("%d %d",alc,bob);
}
