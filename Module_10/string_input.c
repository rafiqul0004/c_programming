#include<stdio.h>
#include<string.h>
int main(){
    char r[40];
    fgets(r,20,stdin);
    r[14]='\0';
    printf("%s\n",r);
    return 0;
}