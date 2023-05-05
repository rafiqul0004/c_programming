#include<stdio.h>
int main(){
    int b;
    scanf("%d",&b);
    int r[b];
    for (int i = 0; i < b; i++)
    {
        scanf("%d",&r[i]);
    }
    for (int i = 0; i <b-1; i++)
    {
        for (int j = i+1; j < b; j++)
        {
            if (r[i]>r[j])
            {
            int t = r[i];
            r[i]=r[j];
            r[j]=t;
            }
        } 
    }
    for (int i = 0; i < b; i++)
    {
        printf("%d",r[i]);
    } 
    return 0;
}