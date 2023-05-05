#include<stdio.h>
#include<string.h>
void fun(char *r){
int sz=strlen(r);
printf("%d\n",sz);
}
int main(){
    char r[10]="Rahat";
    fun(r);
    return 0;
}