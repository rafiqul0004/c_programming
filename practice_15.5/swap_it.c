#include<stdio.h>
swap_it(int *a,int *b){
     int t;
     t=*a;
     *a=*b;
     *b=t;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap_it(&a,&b);
    printf("%d %d",a,b);
    return 0;
}