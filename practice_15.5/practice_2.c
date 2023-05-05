#include<stdio.h>
void my_len(char *r){
    int c=0;
  for (char i = 0; r[i]!='\0'; i++)
  {
    c++;
  }
  printf("%d\n",c);
}
int main(){
    char r[100];
    scanf("%s",r);
    my_len(r);
    return 0;
}