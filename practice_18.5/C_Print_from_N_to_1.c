#include<stdio.h>
void ra(int i, int r){
    if(i==1) return;
    printf("%d ",i);
    ra(i-1,r);
}
int main(){
    int r;
    scanf("%d",&r);
    ra(r,r);
    printf("1");
    return 0;
}