#include<stdio.h>
int main(){
    int r,x,f=0;
    scanf("%d",&r);
    int b[r];
    for (int i = 0; i <r; i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&x);
    for ( int i = 0; i < r-1; i++)
    {
        for (int j = i+1; j < r; j++)
        {
            if (b[i]+b[j]==x)
            {
                f=1;
            }
            
        }
        
    }
    if (f>0)
    {
        printf("YES\n");
    }
    else{
        printf("N0\n");
    } 
    return 0;
}