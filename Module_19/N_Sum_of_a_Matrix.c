#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int d[row][col],r[row][col],ans[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&d[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&r[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j]=d[i][j] + r[i][j];
        }
        
    }
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}