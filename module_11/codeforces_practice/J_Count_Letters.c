#include<stdio.h>
int main(){
    char r;
    int c[26]={0};
    while (scanf("%c",&r)!=EOF)
    {
        c[r-'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (c[i-'a']>0)
        {
            printf("%c : %d\n",i,c[i-'a']);
        }
        
    }
    
    return 0;
}