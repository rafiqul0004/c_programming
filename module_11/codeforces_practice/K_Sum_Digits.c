#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    char r[n];
    scanf("%s",r);
    for (int i = 0; i < n; i++)
    {
        int v=r[i]-48;
        sum=sum+v;
    }
    printf("%d\n",sum);
    
    return 0;
}