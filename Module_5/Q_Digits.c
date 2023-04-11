#include<stdio.h>
int main(){
    int t,r,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&r);
        do
        {
            printf("%d ",r%10);
            r=r/10;
        } while (r!=0);
        printf("\n");
        
    }
    return 0;
}