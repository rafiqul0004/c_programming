#include<stdio.h>
int fun(char r[], int i){
    if(r[i]=='\0') return 0;
    int l=fun(r,i+1);
    return l+1;
}
int main(){
    char r[6]="hello";
    int len=fun(r,0);
    printf("%d\n",len);
    return 0;
}