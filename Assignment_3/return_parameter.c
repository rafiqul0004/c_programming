#include<stdio.h>
int sum(int *d, int r){
    int s=0;
 for (int i = 0; i <r; i++)
 {
    s=s+d[i];
 }
 return s;
 
}
int main(){
    int r,s;
    scanf("%d",&r);
    int d[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    s=sum(d,r);
    printf("%d",s);
    return 0;
}