#include <stdio.h>
int main(){
    int x1,x2,v1,v2;
    
    printf("birinci kanguru konum\n");
    scanf("%d",&x1);
    
    
    
    printf("birinci kanguru atlama\n");
    scanf("%d",&v1);
    
    printf("ikinci kanguru konum\n");
    scanf("%d",&x2);
    
    printf("ikinci kanguru konum\n");
    scanf("%d",&v2);
    
    x1=x1+v1;
    x2=x2+v2;
        
    while(((x1<x2)&&(v1>v2))||((x1>x2)&&(v2>v1))){
        x1=x1+v1;
        x2=x2+v2;
    }    
    if(x1==x2){
        printf("YES");
    }
    else{
        printf("NO");
    }
        
        
        
        
        
}
