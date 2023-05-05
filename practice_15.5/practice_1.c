#include<stdio.h>
#include<math.h>
void my_abs(int r){
    int d= abs(r);
    printf("%d\n",d);
}
int main(){
    int r;
    scanf("%d",&r);
    my_abs(r);
    return 0;
}