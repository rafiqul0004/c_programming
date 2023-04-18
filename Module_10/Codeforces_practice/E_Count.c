#include<stdio.h>
#include<string.h>
int main(){
    char r[1000001];
    scanf("%s",r);
    int s=0;
    for (int i = 0; i <strlen(r); i++)
    {
        s=s+(r[i]-'0');
    }
    // int i=0;
    // while (i<strlen(r))
    // {
    //     s=s+(r[i]-'0');
    //     i++;
    // }
    
    printf("%d\n",s);
    
    return 0;
}