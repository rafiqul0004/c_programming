#include<stdio.h>
int main(){
    int r;
    while(scanf("%d",&r)!=EOF){
        if (r==1999)
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
        
    }
    return 0;
}