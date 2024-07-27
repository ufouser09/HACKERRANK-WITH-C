#include <stdio.h>
int main(){
	int N,i,temp,digit;
	printf("kac tane sayi girceksiniz\n");
	scanf("%d",&N);
	
	int sayi[N];
	int count[N];
	
	for(i=0;i<N;i++){
		printf("lutfen bir sayi giriniz\n");
		scanf("%d",&sayi[i]);
	}
	
	for(i=0;i<N;i++){
		count[i]=0;
	}
	
	for(i=0;i<N;i++){
	
	temp=sayi;
	while(temp>0){
	
	digit=temp%10;
	sayi[i]/=10;
	
	if(sayi[i]%digit==0){
	
	count[i]++;
}
	}
}
for(i=0;i<N;i++){
	printf("%d",count[i]);
}
}

