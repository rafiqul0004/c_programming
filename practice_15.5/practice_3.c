#include<stdio.h>
void change_it(int *d,int r){
d[r-1]=100;
 
}
int main(){
    int r;
    scanf("%d",&r);
    int d[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    change_it(d,r);
    for (int i = 0; i < r; i++)
 {
    printf("%d ",d[i]);
 }
    return 0;
}