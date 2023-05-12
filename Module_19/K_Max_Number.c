#include<stdio.h>
#include<limits.h>
int max(int d[], int r, int i){
    if (i==r)
    {
        return INT_MIN;
    }
    
    int mx=max(d,r,i+1);
    if(d[i]>mx){
        return d[i];
    }
    else {
        return mx;
    }
}
int main(){
    int r;
    scanf("%d",&r);
    int d[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    int ans=max(d,r,0);
    printf("%d\n",ans);
    return 0;
}