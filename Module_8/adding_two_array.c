#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int r[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&r[i]);
    }
    int b;
    scanf("%d",&b);
    int d[b];
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&d[i]);
    }
    int rd[a+b];
    for (int i = 0; i < a; i++)
    {
        rd[i]=r[i];
    }
    // int i=a;
    for (int j = 0; j < b; j++)
    {
        rd[a+j]=d[j];
        // i++;
    }
    for (int i = 0; i < a+b; i++)
    {
        printf("%d ",rd[i]);
    }
    return 0;
}