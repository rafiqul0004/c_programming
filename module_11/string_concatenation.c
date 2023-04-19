#include<stdio.h>
#include<string.h>
int main(){
    char b[50],r[25];
    scanf("%s %s",b,r);
    int sz=strlen(b);
    for (int i = 0; i <=strlen(r); i++)
    {
        b[sz+i]=r[i];
    }
    printf("%s %s\n",b,r);
    
    return 0;
}