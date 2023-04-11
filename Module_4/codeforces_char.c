#include<stdio.h>
int main(){
    char r;
    int d;
    scanf("%c",&r);
    if (r>='a' && r<='z')
    {
        d=r-32;
        printf("%c",d);
    }
    else{
        d=r+32;
        printf("%c",d);
    }
    
    return 0;
}