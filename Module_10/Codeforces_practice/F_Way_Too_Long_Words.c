#include<stdio.h>
#include<string.h>
int main(){
    int r,sz;
    scanf("%d",&r);
    char d[101];
    for (int i = 0; i < r; i++)
    {
        scanf("%s",&d);
        sz=strlen(d);
        if (sz>10)
        {
            printf("%c%d%c\n",d[0],sz-2,d[sz-1]);
        }
        else{
         printf("%s\n",d);
        }
    }
    
    return 0;
}