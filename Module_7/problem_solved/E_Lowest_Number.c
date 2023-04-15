#include<stdio.h>
#include<limits.h>
int main(){
    int r,i,p,min=INT_MAX;
    scanf("%d",&r);
    int d[r];
    for(i=0;i<r;i++){
     scanf("%d",&d[i]);
    }
    for(i=0;i<r;i++){
     if(d[i]<min){
        min=d[i];
        p=i+1;
     }
    }
    printf("%d %d\n",min,p);
    return 0;
}