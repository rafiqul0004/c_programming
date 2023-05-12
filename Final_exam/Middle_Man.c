#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int d[r];
    for (int i = 0; i <r; i++)
    {
        scanf("%d",&d[i]);
    }
    for (int i = 0; i < r-1; i++)
    {
        for (int j = i+1; j < r; j++)
        {
            if(d[i]>d[j]){
              int t=d[i];
              d[i]=d[j];
              d[j]=t;
            }
        }
        
    }
    if (r%2==0)
    {
        printf("%d %d",d[(r/2)-1],d[(r/2)]);
    }
    else{
         printf("%d",d[((r+1)/2)-1]);
    }
    
    
    
    return 0;
}