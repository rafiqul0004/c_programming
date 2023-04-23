#include<stdio.h>
int main(){
    int r,d,f=0;
    scanf("%d",&r);
    int b[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&b[i]);
        
    }
    scanf("%d",&d);
    for (int i = 0; i < r; i++)
    {
        if (b[i]==d)
        {
            f++;
        }
    }
    
    printf("%d\n",f);
    
    return 0;
}