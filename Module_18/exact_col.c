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
    int ec;
    scanf("%d",&ec);
    for (int i = 0; i <r; i++)
    {
        printf("%d ",d[i][ec]);
        
    }
    
    return 0;
}