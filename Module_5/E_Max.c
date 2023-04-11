#include<stdio.h>
int main(){
    int t,i,r,d=0;
    scanf("%d",&t);
    for ( i = 1; i <=t; i++)
    {
        scanf("%d",&r);
        if (r>d)
        {
            d=r;
        }
        

    }
    printf("%d",d);
    
    return 0;
}