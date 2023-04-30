#include<stdio.h>
int main(){
    int r,d=1;
    scanf("%d",&r);
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            printf("*");
        }
        d++;
        printf("\n");
    }
    
    return 0;
}