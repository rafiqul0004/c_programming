#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int r[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&r[i]);
    }
    int min=INT_MAX, c=1;
    for (int i = 0; i <n; i++)
    {
        if(r[i]<min){
            min=r[i];
            c=1;
        }
        else if (r[i]==min)
        {
            c++;
        }
        
    }
    if (c%2==1)
    {
        printf("Lucky\n");
    }
    else{
        printf("Unlucky\n");
    }
    
    
    return 0;
}