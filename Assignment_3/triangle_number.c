#include<stdio.h>
int main(){
    int r,s,d=1;
    scanf("%d",&r);
    s=r-1;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=d; j++)
        {
            printf("%d",i);
        }
        d++;
        s--;
        printf("\n");     
    }
    
    return 0;
}