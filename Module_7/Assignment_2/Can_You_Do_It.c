#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    if(r<=0){
        for(i=r;i<2;i++){
            printf("%d ",i);
        }
    }
    else{
        for ( i = 1; i <= r; i++)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}