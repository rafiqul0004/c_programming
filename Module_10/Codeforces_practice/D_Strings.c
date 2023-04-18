#include<stdio.h>
#include<string.h>
int main(){
    char r[11],d[11];
    scanf("%s %s",r,d);
    int a,b;
    a=strlen(r);
    b=strlen(d);
    char dr[a+b+1];
    for (int i = 0; i < a; i++)
    {
        dr[i]=r[i];
    }
     for (int j = 0; j < b; j++)
    {
        dr[a+j]=d[j];
    }
    printf("%d %d\n",a,b);
   for (int i = 0; i < a+b; i++)
   {
     printf("%c",dr[i]);
   }
   char t;
   t=r[0];
   r[0]=d[0];
   d[0]=t;
   printf("\n%s %s",r,d);  
    return 0;
}