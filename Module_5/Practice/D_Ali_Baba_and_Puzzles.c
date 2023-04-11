#include<stdio.h>
int main(){
    int r,d,n,t;
    scanf("%d%d%d%d",&r,&d,&n,&t);
    if((r+d-n)==t || (r+(d*n))==t || (r-d+n)==t || (r-(d*n))==t || ((r*d)+n)==t || ((r*d)-n)==t)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}