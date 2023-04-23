#include<stdio.h>
#include<string.h>
int main(){
    char r[1001];
    scanf("%s",r);
    int c[26]={0};
    for (int i = 0; i < strlen(r); i++)
    {
        int v= r[i]-'a';
        c[v]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n",i+'a',c[i]);
    }
    
    
    return 0;
}