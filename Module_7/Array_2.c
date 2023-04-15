#include<stdio.h>
int main(){
    int r,i;
    scanf("%d",&r);
    int d[r];
    for(i=0;i<r;i++){
        scanf("%d",&d[i]);
    }
     for(i=0;i<r;i+=2){
        printf("%d\n",d[i]);
    }
    return 0;
}