#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
    // Complete this function  
	int toplam;
	int fark;
	
	toplam =*a+*b;
	fark= abs(*a-*b);
	
	*a=toplam;
	*b=fark;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    printf("lutfen 2 tane sayi giriniz\n");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
