#include<stdio.h>
int main(){
    int i,r;
    scanf("%d",&r);
    if(r==1){
        printf("-1\n");
    }
    else{
        for ( i = 1; i<=r; i++)
        {
            if (i%2==0)
            {
                printf("%d\n",i);
            }
            
        }
        
    }
    return 0;
}