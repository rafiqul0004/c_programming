#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int d[r][c];
     for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            scanf("%d",&d[i][j]);
        }
        
    }
    int f=1;
    if(r!=c){
        f=0;
    }
     for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            if (i+j==r-1)
            {
                continue;
            }
            
            if(d[i][j]!=0){
                f=0;
            }
        }
        
    }
    if(f==1){
        printf("Secondary Diagonal\n");
    }
    else{
        printf("Not Diagonal\n");
    }
    return 0;
}