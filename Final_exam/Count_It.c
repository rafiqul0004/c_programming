#include<stdio.h>
#include<string.h>
int main(){
    int c=0,sm=0,s=0;
    char r[1001];
    fgets(r,1001,stdin);
    for (int i = 0; i <strlen(r); i++)
    {
        if (r[i]>='A' && r[i]<='Z')
        {
            c++;
        }
       if (r[i]>='a' && r[i]<='z')
        {
            sm++;
        }
        if (r[i]==' ')
        {
            s++;
        }
        
        
    }
    printf("Capital - %d\n",c);
    printf("Small - %d\n",sm);
    printf("Spaces - %d\n",s);
    return 0;
}