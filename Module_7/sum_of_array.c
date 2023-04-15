#include<stdio.h>
int main(){
    int r,i,sum=0;
    scanf("%d",&r);
    int d[r];
    for ( i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
        sum+=d[i];
    }
    printf("%d\n",sum);
    
    return 0;
}