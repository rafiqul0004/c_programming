#include <stdio.h>
int main()
{
    int i,t,n;
    scanf("%d",&n);
    int r[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&r[i]);
    }
    scanf("%d",&t);
    if(t>0){
    for ( i = 0; i < n; i=i+2)
    {
        
        // if(i%2==0){
        //     printf("%d ",r[i]);
        // }
         printf("%d ",r[i]);  
        
    }
    }
    else{
    for ( i = 1; i < n; i=i+2)
    {
            printf("%d ",r[i]);  
    }
    }
    
    return 0;
}