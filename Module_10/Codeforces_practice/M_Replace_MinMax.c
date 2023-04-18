#include<stdio.h>
#include<limits.h>
int main(){
    int r,min=INT_MAX,max=INT_MIN;
    scanf("%d",&r);
    int d[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    for (int i = 0; i < r; i++)
    {
        if (d[i]<d[min])
        {
            min=i;
        }
        if (d[i]>d[max])
        {
            max=i;
        }
    }
    
        int temp=d[min];
        d[min]=d[max];
        d[max]=temp;
    for (int i = 0; i < r; i++)
    {
        printf("%d ",d[i]);
    }
    
    
    
    return 0;
}