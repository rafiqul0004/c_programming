#include<stdio.h>
int add(){
    int a,b,s;
    scanf("%d %d",&a,&b);
    s=a+b;
    return s;
}
int main(){
    int x,y;
    printf("%d\n",add(x,y));
    return 0;
}