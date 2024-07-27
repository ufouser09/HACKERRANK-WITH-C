#include <stdio.h>
int main(){
    int N,i;
    long topla;
    scanf("%d",&N);
    
    int A[N];
    
    
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    topla=0;
    for(i=0;i<N;i++){
        topla=topla+A[i];
    }
    printf("%ld",topla);
}

