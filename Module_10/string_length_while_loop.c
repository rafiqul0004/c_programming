#include<stdio.h>
int main(){
    char r[50];
    scanf("%s",r);
    int i=0,c=0;
    while (r[i]!='\0')
    {
        c++;
        i++;
    }
    printf("%d\n",c);
    
    return 0;
}