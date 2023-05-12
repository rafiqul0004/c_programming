#include<stdio.h>
void fun(int d[],int n,int i){
    if(i==n) return;
    printf("%d ",d[i]);
    fun(d,n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    int d[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&d[i]);
    }
    fun(d,n,0);
    
    return 0;
}