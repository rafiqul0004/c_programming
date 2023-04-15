#include<stdio.h>
int main(){
    int j,r;
    scanf("%d",&r);
    int d[r];
    for ( j = 0; j < r; j++)
    {
        scanf("%d",&d[j]);
    }
    for ( j = 0; j < r; j++)
    {
        if(d[j]<0){
            d[j]=2;
        }
        else if (d[j]>=1)
        {
            d[j]=1;
        }
        else{
            d[j]=0;
        }
        printf("%d ",d[j]);
        
    }
    
    return 0;
}