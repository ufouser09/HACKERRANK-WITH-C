#include <stdio.h>

int main(){
    int i,N,toplam;
    
    scanf("%d",&N);
    
    int A[N];
    
    
    
    for(i=0;i<N;i++){
        
        scanf("%d",&A[i]);
    }
    toplam=0;
    
    for(i=0;i<N;i++){
        toplam+=A[i];
    }
    printf("%d",toplam);
    return 0;
}
