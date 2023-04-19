#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&r[i]);
    }
    int count[10]={0};
    for (int i = 0; i < n; i++)
    {
        count[r[i]]++;
    }
    for (int i = 0; i <=9; i++)
    {
        printf("%d - %d\n",i,count[i]);
    }
    
    return 0;
}