#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int d[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&d[i][j]);
        }
        
    }
    int f=1;
    if (r!=c)
    {
        f=0;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i==j)
            {
                if (d[i][j]!=d[0][0])
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
    if(f==1){
        printf("Sclar Matrix\n");
    }
    else{
        printf("Not Scalar\n");
    }
    
    return 0;
}