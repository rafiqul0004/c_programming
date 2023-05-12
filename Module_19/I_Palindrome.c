#include<stdio.h>
#include<string.h>
int main(){
    char r[1001];
    scanf("%s",r);
    int i=0,j=strlen(r)-1,f=1;
    while (i<j)
    {
        if (r[i]!=r[j])
        {
            f=0;
        }
        i++;
        j--;
        
    }
    if (f==0)
    {
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    
    
    return 0;
}