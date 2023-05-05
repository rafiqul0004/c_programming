#include<stdio.h>
int main()
{
    int r,b;
    scanf("%d",&r);
    b=r;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=b; j++)
        {
            printf("*");
        }
        b--;
        printf("\n");
        
    }
    
    return 0;
}