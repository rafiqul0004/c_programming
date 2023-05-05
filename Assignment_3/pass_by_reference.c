#include<stdio.h>
int pv(int *a, int *b){
    printf("Getting value: %d %d\n",*a,*b);
    *a=40;
    *b=40;
    printf("After Change: %d %d\n",*a,*b);

}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    pv(&a,&b);
    printf("Passing Value: %d %d\n",a,b);
    return 0;
}