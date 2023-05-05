#include<stdio.h>
int main(){
    int r,s,n;
    scanf("%d",&r);
    s=r-1;
    n=1;
    for (int i = 1; i <=(2*r); i++)
    {
        for (int j = 1; j <=s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=n; j++)
        {
            printf("*");
        }
        if (i<r)
        {
            s--;
            n+=2;
        }
        else if(i>r){
            s++;
            n-=2;
        }
        printf("\n");       
    }
    
    return 0;
}