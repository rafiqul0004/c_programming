#include<stdio.h>
int main(){
    int r,d,t;
    scanf("%d%d",&r,&d);
    t=r-d;
    if(t>=0){
        printf("%d\n",t);
    }
    else{
        printf("0\n");
    }
    return 0;
}