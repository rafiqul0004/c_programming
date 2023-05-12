#include<stdio.h>
long long int fact(long long int r){
    if(r==0) {
        return 1;
    }
    long long int ans=fact(r-1);
    return ans*r;
}
int main(){
    long long int r;
    scanf("%lld",&r);
    long long int f=fact(r);
    printf("%lld",f);
    return 0;
}