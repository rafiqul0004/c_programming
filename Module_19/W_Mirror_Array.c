#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int d[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&d[i][j]);
        }
        
    }
     for (int i = 0; i < r; i++)
    {
        for (int j = c-1; j>=0; j--)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}