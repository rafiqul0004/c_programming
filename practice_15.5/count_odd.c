#include<stdio.h>
void count_odd(int *d, int r){
int c=0;
  for (int i = 0; i < r; i++)
  {
    if (d[i]%2!=0)
    {
        c++;
    }
    
  }
  printf("%d\n",c);
  
}
int main(){
    int r;
    scanf("%d",&r);
    int d[r];
    for (int i = 0; i < r; i++)
    {
        scanf("%d",&d[i]);
    }
    count_odd(d,r);
    return 0;
}