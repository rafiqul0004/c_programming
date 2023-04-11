#include<stdio.h>
int main(){
    int r,d;
    scanf("%d%d",&r,&d);
    if(d%r==0 || r%d==0){
        printf("Multiples");
    }
    else{
        printf("No Multiples");
    }
    return 0;
}