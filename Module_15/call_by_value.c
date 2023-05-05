#include<stdio.h>
void fun(int r){
    printf("%d\n",r);
    r=20;
    printf("%d\n",r);
}
int main(){
    int r=12;
    printf("%d\n",r);
    fun(r);
    printf("%d\n",r);
    return 0;
}