#include<stdio.h>
int main(){
    int i,t,mlt=1;
    scanf("%d",&t);
    for ( i = 1; i <=12; i++)
    {
        mlt=t*i;
        printf("%d * %d = %d\n",t,i,mlt);
    }
    
    return 0;
}