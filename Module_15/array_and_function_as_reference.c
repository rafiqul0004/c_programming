#include<stdio.h>
fun(int *r,int n){
    r[1]=5;
}
fun1(char *b){
    b[0]='G';
}
int main(){
    int r[5]={10,20,30,40,50};
    char b[10]="Hello";
    fun(r,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",r[i]);
    }
    
    fun1(b);
    printf("\n%s",b);
    return 0;
}