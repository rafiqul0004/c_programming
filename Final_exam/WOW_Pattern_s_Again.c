#include<stdio.h>
int main(){
    int r,d=1;
    scanf("%d",&r);
    int s=r-1;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 0; j <s; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=d; j++)
        {
            if (i%2!=0)
            {
                printf("^");
            }
            else if (i%2==0)
            {
                printf("*");
            }
            
        }
        s--;
        d=d+2;
        printf("\n");
        
    }
    
    return 0;
}