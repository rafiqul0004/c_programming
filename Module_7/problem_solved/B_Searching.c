#include<stdio.h>
int main(){
    int i,n,r,t=-1;
    scanf("%d",&r);
    int d[r];
    for ( i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d",&n);
    for(i=0;i<r;i++){
        if(d[i]==n){
            t=i;
            break;
        }
    }
    printf("%d\n",t);
    return 0;
}