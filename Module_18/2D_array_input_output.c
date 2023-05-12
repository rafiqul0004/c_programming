#include<stdio.h>
int main(){
    int r[5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&r[i][j]);
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}