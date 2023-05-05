//with return without peremeter
#include<stdio.h>
small_to_capital(){
    char r;
    scanf("%c",&r);
    int d=r-32;
    return d;
}
int main(){
    int e=small_to_capital();
    printf("%c\n",e);
    return 0;
}