#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    for ( i = 1; i <=r; i++)
    {
        if(r%i==0){
            printf("%d\n",i);
        }
    }
    
    return 0;
}