#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,N;
	int i,j;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	
	N=2*a-1;
	int matris[N][N];
	int end=N-1;
	int start=0;
	
	while(a!=0){
		
	
	for(i=start;i<=end;i++){
		for(j=start;j<=end;j++){
			
			if((i==start || i==end) || (j==start || j==end)){
				matris[i][j]=a;
			}
		}
	}

start++;
end--;
a--;
}
for(i=0;i<N;i++){
	for(j=0;j<N;j++){
		printf("%d\t",matris[i][j]);
	}
	printf("\n");
}

}
//kod calýsýyor.
