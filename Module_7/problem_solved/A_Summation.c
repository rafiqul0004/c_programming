#include<stdio.h>
int main(){
    long long int r,i;
    long long int sum=0;
    scanf("%lld",&r);
    long long int d[r];
    for(i=0;i<r;i++){
        scanf("%lld",&d[i]);
        sum+=d[i];
    }
    if(sum<0){
        sum=sum*-1;
        printf("%lld\n",sum);
    }
    else{
        printf("%lld\n",sum);
    }
    return 0;
}