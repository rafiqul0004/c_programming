//without return without peremeter
#include<stdio.h>
 capital_to_small(){
    char r;
    scanf("%c",&r);
    int d=r+32;
    printf("%c\n",d);
 }
int main(){
    capital_to_small();
    return 0;
}