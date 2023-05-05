#include<stdio.h>
int main(){
    int r[5]={2,3,4,5,6};
    printf("%p\n",&r[0]);
    printf("%p\n",r);
    printf("%d\n",*(r+1));
    printf("%d\n",*r);
    return 0;
    
}