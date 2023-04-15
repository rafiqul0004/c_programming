#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    int d[r];
    for(i=0;i<r;i++){
        scanf("%d",&d[i]);
    }
    for ( i = 0; i < r; i++)
    {
        if(d[i]<=10){
            printf("A[%d] = %d\n",i,d[i]);
        }
    }
    
    return 0;
}