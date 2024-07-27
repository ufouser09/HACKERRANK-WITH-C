#include<stdio.h>
#include<stdlib.h>

int findsmth(int* arr,int size,int target);
typedef int (*isContain)(int*,int,int);

typedef struct{
	int *arr;
	isContain isCnt;
}strct;

strct* createStrct(int size);

int main(){
	strct* my = createStrct(5);
	int i =0;
	if(my->isCnt(my->arr,5,3)==1){
		printf("founded\n");
	}else{
		printf("not founded\n");
	}
}
int findsmth(int* arr,int size,int target){
	int i = 0;
	for(i=0;i<size;i++){
		if(arr[i] == target){
			return 1;
		}
	}
	return 0;
}
strct* createStrct(int size){
	strct* helper;
	helper->isCnt = findsmth;
	helper->arr = (int*) malloc(sizeof(int)*size);
	int i = 0;
	for(i=0;i<size;i++){
		(helper->arr)[i] = i*2;
		printf("%d ",(helper->arr)[i]);
	}
	printf("\n");
	return helper;
}
