#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int r[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&r[i]);
    }
    int count[100001]={0};
    for (int i = 0; i < n; i++)
    {
        count[r[i]]++;
    }
    for (int i = 1; i <=m; i++)
    {
        printf("%d\n",count[i]);
    }
    
    return 0;
}