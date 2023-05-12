#include<stdio.h>
int main(){
    float x,p,ans;
    scanf("%f %f",&x,&p);
    ans=p/(1-(x/100));
    printf("%.2f",ans);
    return 0;
}