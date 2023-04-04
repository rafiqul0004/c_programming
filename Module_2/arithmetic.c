#include<stdio.h>
int main(){
    int a=10,b=20,c=6,sum,sub,mod,mlt;
    float div;
    sum=a+b;
    sub=b-a;
    mlt=a*b;
    div=b/a;
    mod=b%c;
    printf("%d %d %d %.1f %d",sum,sub,mlt,div,mod);
    return 0;
}