#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;ar[i]!=0;i++)
    {
        count++;
    }

    printf("%d",count);
    return 0;
}