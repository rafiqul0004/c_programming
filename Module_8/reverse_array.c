#include<stdio.h>
int main(){
    int r,t;
    scanf("%d",&r);
    int d[r];
    for ( int i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    int i=0,j=r-1;
   while (i<j)
   {
     t=d[i];
     d[i]=d[j];
     d[j]=t;
     i++;
     j--;
   }
   for ( int i = 0; i < r; i++)
   {
     printf("%d ",d[i]);
   }
    
    return 0;
}