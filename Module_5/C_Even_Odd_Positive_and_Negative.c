#include<stdio.h>
int main(){
    int t,r,i,ev=0,od=0,pos=0,neg=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&r);
        if (r%2==0)
        {
            ev++;
        }
        else{
            od++;
        }
        if (r>0)
        {
            pos++;
        }
        else if (r<0)
        {
            neg++;
        }
        
        
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",ev,od,pos,neg);
    return 0;
}