#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int N;
    int seviye,durum;
    int i;

    printf("lutfen adim sayisini giriniz\n");
    scanf("%d",&N);

    char A[N];
    printf("lutfen U veya D harfi giriniz\n");
    scanf("%s",A);
    
    
    seviye=0;
    durum=0;
    i=0;
    while(A[i]!='\0'){
        if(A[i]=='U'){
        	
            seviye++;
            
        }
        else if(A[i]=='D'){
        	if(seviye==0){
        		durum++;
			}
            seviye--;
        }
        
        i++;
}
    printf("%d",durum);


}

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int N;
    int seviye,durum;
    int i;

    scanf("%d",&N);

    char A[N];
    scanf("%s",A);
    
    
    seviye=0;
    durum=0;
    i=0;
    while(A[i]!='\0'){
        if(A[i]=='U'){
            
            seviye++;
            
        }
        else if(A[i]=='D'){
            if(seviye==0){
                durum++;
            }
            seviye--;
        }
        
        i++;
}
    printf("%d",durum);


}
*/
