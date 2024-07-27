#include <stdio.h>
int main(){
    int N,i,j;
    printf("lutfen satir sayisini giriniz\n");
    
    scanf("%d",&N);
    
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            
            if(j<N-1-i){
                printf(" ");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
    
    
}

