#include<stdio.h>
int main(){
    int r,i,p,v;
    scanf("%d",&r);
    int d[r+1];
    for ( i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&p,&v);
    for ( i = r; i >= p+1; i--)
    {
        d[i]=d[i-1];
    }
    d[p]=v;
    for ( i = 0; i <=r; i++)
    {
        printf("%d ",d[i]);
    }
    
    
    
    return 0;
}