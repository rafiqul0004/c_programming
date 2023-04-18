#include<stdio.h>
#include<string.h>
int main(){
    int sz,c=1;
    char r[1001];
    scanf("%s",r);
    sz=strlen(r);
    int i=0,j=sz-1;
    while(i<j){
        if(r[i++]!=r[j--]){
            c=0;
            break;
        }
    }
    if (c>0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    } 
    return 0;
}