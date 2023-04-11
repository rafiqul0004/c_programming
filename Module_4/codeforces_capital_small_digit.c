#include<stdio.h>
int main(){
    char r;
    scanf("%c",&r);
    if(r>='0' && r<='9'){
     printf("IS DIGIT\n");
    }
    else{
      printf("ALPHA\n");
      if(r>='a' && r<='z'){
        printf("IS SMALL\n");
      }
      else{
        printf("IS CAPITAL\n");
      }
    }
    return 0;
}