#include<stdio.h>
int main(){
    char r[1000001];
    fgets(r,1000001,stdin);
    // for (int i = 0; r[i] !='\\'; i++)
    // {
    //     printf("%c",r[i]);
    // }
    int i=0;
    while (r[i]!='\\')
    {
        printf("%c",r[i]);
        i++;
    }
    
    
    return 0;
}