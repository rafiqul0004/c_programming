#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,sum1=0,sum2=0,ans=0;
    scanf("%d",&r);
    int d[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d",&d[i][j]);
            if (i==j)
            {
                sum1=sum1+d[i][j];
            }
            if (i+j==r-1)
            {
                sum2=sum2+d[i][j];
            }
        
        }
    }
    ans=abs(sum1-sum2);
    printf("%d\n",ans);
    
    return 0;
}