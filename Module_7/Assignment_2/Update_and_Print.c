#include<stdio.h>
int main(){
    int r,i,n,p;
    scanf("%d",&r);
    int d[r];
    for ( i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d %d",&p,&n);
    for ( i = 0; i < r; i++)
    {
        d[p]=n;
    }
    for ( i = r-1; i>=0; i--)
    {
        printf("%d ",d[i]);
    }
    
    return 0;
}