#include <stdio.h>
int main(){
    int p,a,n,b,m;
    scanf("%d",&n);
    
    scanf("%d",&m);
    
    p=1;
    
    a=m-p;
    a++;
    a=a/2;
    
    b=n-m;
    b++;
    b=b/2;
    
    
    if(n%2==1 && m==n-1){
        printf("%d",0);
    }
    else if(a<b){
        printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
    
    
        
    
}






































