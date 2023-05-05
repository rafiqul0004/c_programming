#include<stdio.h>
int main(){
    int r=12;
    int* p= &r;
    printf("%p\n",p);
    //Dereference
    printf("%d\n", *p);
    *p=10;
    printf("%d\n",*p);
    return 0;
}