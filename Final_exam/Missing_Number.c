#include<stdio.h>
int main(){
    int t,r,a,b,c,ans=0;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d",&r,&a,&b,&c);
        ans=r-(a+b+c);
        printf("%d\n",ans);
    }
    

    return 0;
}