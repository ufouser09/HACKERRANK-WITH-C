#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,i;
    int j;
    printf("lutfen N sayisini giriniz\n");
    scanf("%d",&N);
    
    int arr[N];
    
    printf("lutfen ilk 3 degeri giriniz\n");
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(j=3;j<N;j++){
        
        arr[j]=arr[j-3]+arr[j-2]+arr[j-1];
    }
    printf("%d",arr[N-1]);
    
}

