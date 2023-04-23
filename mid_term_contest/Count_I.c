#include<stdio.h>
int main(){
    int r,e=0,o=0;
    scanf("%d",&r);
    int b[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&b[i]);
        if (b[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }
        
    }
    printf("%d %d\n",e,o);
    
    return 0;
}