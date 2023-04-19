#include<stdio.h>
int main(){
    char r[50],d[50];
    scanf("%s %s",r,d);
    int i=0;
    while (1)
    {
        if(r[i]=='\0' && d[i]=='\0'){
            printf("Same\n");
            break;
        }
        else if (r[i]=='\0')
        {
            printf("r is small\n");
            break;
        }
        else if (d[i]=='\0')
        {
            printf("d is small\n");
            break;
        }
        if (r[i]==d[i])
        {
            i++;
        }
        else if (r[i]<d[i])
        {
            printf("r is small\n");
            break;
        }
        else{
            printf("d is small\n");
            break;
        }  
        
    }
    
    return 0;
}