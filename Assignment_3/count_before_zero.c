#include<stdio.h>
int count_before_zero(int *d, int r){
     int c=0;
    for (int i = 0; i <r; i++)
    {
        if(d[i]==0){
        break;
        }
        c++;
    }
    
    return c;
}
int main(){
    int r,c;
    scanf("%d",&r);
    int d[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    c=count_before_zero(d,r);
    printf("%d\n",c);
    return 0;
}