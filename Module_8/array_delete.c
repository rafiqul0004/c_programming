#include<stdio.h>
int main(){
    int r,i,p;
    scanf("%d",&r);
    int d[r+1];
    for ( i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&p);
    for ( i = p; i < r-1; i++)
    {
        d[i]=d[i+1];
    }
    for ( i = 0; i < r-1; i++)
    {
        printf("%d ",d[i]);
    }
    
    
    return 0;
}