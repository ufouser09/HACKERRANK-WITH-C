#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[3];
	int B[3];
	int point1=0,point2=0;
	int i;
	
	for(i=0;i<3;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<3;i++){
		scanf("%d",&B[i]);
	}
	for(i=0;i<3;i++){
		if(A[i]>B[i]){
			point1++;
		}
		else if(B[i]>A[i]){
			point2++;
		}
	}
	printf("[%d,%d]",point1,point2);
}
