#include<stdio.h>
void p(int r){
   for (int i = 1; i<r; i++)
   {
    printf("%d ",i);
   }
   
}
int main(){
    int r;
    scanf("%d",&r);
    p(r);
    printf("%d\n",r);
    return 0;
}