#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int d[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <r; j++)
        {
            scanf("%d",&d[i][j]);
        }
        
    }
    int f=1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <r; j++)
        {
            if (i==j)
            {
                if (d[i][j]!=1)
                {
                    f=0;
                }
                
            }
            else if (d[i][j]!=0)
            {
                f=0;
            }
            
            
        }
        
    }
    if (f==0)
    {
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}