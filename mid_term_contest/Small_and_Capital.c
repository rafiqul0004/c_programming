#include<stdio.h>
#include<string.h>
int main(){
    int r=0,a=0;
    char b[1001];
    scanf("%s",b);
    for (int i = 0; i < strlen(b); i++)
    {
        if (b[i]>='a' && b[i]<='z')
        {
            r++;
        }
        else if (b[i]>='A' && b[i]<='Z')
        {
            a++;
        }
        
        
    }
    printf("%d %d\n",a,r);
    
    return 0;
}
