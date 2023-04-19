#include<stdio.h>
#include<string.h>
int main(){
    char b[50],r[25];
    scanf("%s %s",b,r);
    strcat(b,r);
    printf("%s %s",b,r);
    return 0;
}