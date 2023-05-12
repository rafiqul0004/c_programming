#include<stdio.h>
void run(int i , int n){
  if(i==n+1) return;
  printf("I love Recursion\n");
  run(i+1,n);
}
int main(){
    int n;
    scanf("%d",&n);
    run(1,n);
    return 0;
}