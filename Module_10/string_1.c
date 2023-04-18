#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char r[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c",&r[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",r[i]);
    }
    printf("%d\n",sizeof(r));
    
    
    return 0;
}