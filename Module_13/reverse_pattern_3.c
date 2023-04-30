#include<stdio.h>
int main(){
    int r,d;
    scanf("%d",&r);
    d=r;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            printf("%d ",j);
        }
        d--;
        printf("\n");
    }
    
    return 0;
}