#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    int d[r];
    for ( i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    for ( i = r-1; i >= 0; i--)
    {
        printf("%d ",d[i]);
    }
    
    return 0;
}