#include<stdio.h>
int main(){
    char r[50];
    scanf("%s",&r);
    int c=0;
    for (int i = 0; r[i]!='\0'; i++)
    {
        c++;
    }
    printf("%d\n",c);
    
    return 0;
}