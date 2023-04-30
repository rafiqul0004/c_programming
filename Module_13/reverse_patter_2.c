#include<stdio.h>
int main(){
    int r,s,d;
    scanf("%d",&r);
    s=0;
    d=(2*r)-1;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=d; j++)
        {
            printf("*");
        }
        s++;
        d-=2;
        printf("\n");
        
    }
    
    return 0;
}