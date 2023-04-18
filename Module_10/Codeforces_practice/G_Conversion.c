#include<stdio.h>
#include<string.h>
int main(){
    char r[100001];
    int a;
    fgets(r,100001,stdin);
    for (int i = 0; i < strlen(r); i++)
    {
        if(r[i]>='a' && r[i]<='z'){
            a=r[i];
            r[i]=a-32;
        }
        else if (r[i]>='A' && r[i]<='Z')
        {
            a=r[i];
            r[i]=a+32;
        }
        else if (r[i]==',')
        {
            r[i]=' ';
        }
            
    }
    printf("%s",r);
    
    return 0;
}
