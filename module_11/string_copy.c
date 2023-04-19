#include<stdio.h>
#include<string.h>
int main(){
    char r[40],d[40];
    scanf("%s %s",r,d);
    // for (int i = 0; i <= strlen(d); i++)
    // {
    //     r[i]=d[i];
    // }
    strcpy(r,d);
    printf("%s %s",r,d);
    
    return 0;
}