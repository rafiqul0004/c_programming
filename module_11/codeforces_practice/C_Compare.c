#include<stdio.h>
#include<string.h>
int main(){
    char r[21],b[21];
    scanf("%s %s",r,b);
    int c= strcmp(r,b);
    if(c>0){
        printf("%s\n",b);
    }
    else if (c<0)
    {
        printf("%s\n",r);
    }
    else{
        printf("%s\n",r);
    }
    
    return 0;
}