#include<stdio.h>
#include<string.h>
int len1(){
    int len;
    char r[40];
    scanf("%s",r);
   len = strlen(r);
   return len;
}
int main(){
    int len;
    len =len1();
    printf("%d\n",len);
    return 0;
}