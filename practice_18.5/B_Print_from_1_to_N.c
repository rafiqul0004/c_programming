#include<stdio.h>
void ra(int i, int r){
    if(i==r+1) return;
    printf("%d\n",i);
    ra(i+1,r);
}
int main(){
    int r;
    scanf("%d",&r);
    ra(1,r);
    return 0;
}