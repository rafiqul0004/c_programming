#include<stdio.h>
int main(){
    int r,d;
    scanf("%d%d",&r,&d);
    for (int j = 0; j < d; j++)
    {
        for (int i = 1; i <= r; i++)
        {
            printf("%d ",i);
        
        }
        printf("\n");
    }
    
    
    return 0;
}