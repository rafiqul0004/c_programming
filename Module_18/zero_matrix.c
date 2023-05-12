#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int d[r][c];
    int element=r*c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &d[i][j]);
        }
        
    }
    int e=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if(d[i][j]==0){
            e++;
           }
        }
        
    }
    if (e==element)
    {
        printf("Zero Matrix\n");
    }
    else{
        printf("Not Zero Matrix\n");
    }
    
    
    return 0;
}