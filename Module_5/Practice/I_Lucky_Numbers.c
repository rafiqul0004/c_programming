#include<stdio.h>
int main(){
    int r,d,t;
    scanf("%d",&t);
    r=t%10;
    d=t/10;
    if(r%d==0 || d%r==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}