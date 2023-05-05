#include<stdio.h>
void add(int r,int d){
 int sum=r+d;
 printf("%d\n",sum);
}
int main(){
    int r,d;
    scanf("%d %d",&r,&d);
    add(r,d);
    return 0;
}