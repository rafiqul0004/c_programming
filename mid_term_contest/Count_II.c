#include<stdio.h>
#include<string.h>
int main(){
    int v=0;
    char r[1001];
    scanf("%s",r);
    for (int i = 0; i <strlen(r) ; i++)
    {
        if (r[i]=='a' || r[i]=='e' || r[i]=='i' || r[i]=='o' || r[i]=='u')
        {
            v++;
        }
        
    }
    printf("%d\n",v);
    
    return 0;
}