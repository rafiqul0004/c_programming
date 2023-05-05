#include<stdio.h>
int main(){
    int r,s,k;
    scanf("%d",&r);
    s=0;
    k=(2*r)-1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
        s++;
        k-=2;    
    }
    
    return 0;
}