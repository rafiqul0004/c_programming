#include<stdio.h>
int main(){
    int b,r,z;
    scanf("%d%d%d",&b,&r,&z);
    // min
    if(b<=r && b<=z){
        printf("%d ",b);
    }
    else if(r<=b && r<=z){
        printf("%d ",r);
    }
    else if(z<=r && z<=b){
        printf("%d ",z);
    }

    // max
    if(b>=r && b>=z){
        printf("%d\n",b);
    }
    else if(r>=b && r>=z){
        printf("%d\n",r);
    }
    else if(z>=r && z>=b){
        printf("%d\n",z);
    }
    return 0;
}