#include<stdio.h>
long long int ra(int d[], int r, int i){
    if(i==r) return 0;;
    long long int ans=ra(d,r,i+1);
    return ans+d[i];
}
int main(){
    int r;
    scanf("%d",&r);
    int d[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    long long int ans=ra(d,r,0);
    printf("%lld\n",ans);
    
    return 0;
}