#include<stdio.h>
int main(){
    int r,s,b;
    scanf("%d",&r);
    s=r-1;
    b=1;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <b; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        b+=2;
    }
    
    return 0;
}