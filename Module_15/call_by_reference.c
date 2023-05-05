#include<stdio.h>
void fun(int *p){
 printf("%p\n",p);
 printf("%d\n",*p);
 *p=20;
}
int main(){
    int r=10;
    printf("%p\n",&r);
    fun(&r);
    printf("%d\n",r);
    return 0;
}