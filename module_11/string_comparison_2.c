#include<stdio.h>
#include<string.h>
int main(){
    char r[40],d[40];
    scanf("%s %s",r,d);
    int t = strcmp(r,d);
    if(t>0){
        printf("d is small\n");
    }
    else if (t<0)
    {
        printf("r is small\n");
    }
    else{
        printf("Same\n");
    }
    
    return 0;
}