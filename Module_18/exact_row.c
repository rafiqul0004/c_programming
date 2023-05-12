#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int d[r][c];
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            scanf("%d",&d[i][j]);
        }
        
    }
    int e;
    scanf("%d",&e);
    for (int i = 0; i <c; i++)
    {
        printf("%d ",d[e][i]);
        
    }
    
    return 0;
}