#include<stdio.h>
int main(){
    int r,dark;
    scanf("%d",&r);
    dark=r/1000;
     if(dark%2==0){
        printf("EVEN\n");
     }
     else{
        printf("ODD\n");
     }
    return 0;
}