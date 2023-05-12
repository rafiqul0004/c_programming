#include<stdio.h>
int main(){
    int test,a,b,t=0,p=0;
    scanf("%d",&test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b){
            t++;
        }
        else if (b>a)
        {
            p++;
        }
        else{
            t++;
            p++;
        }
    }
    if (t>p)
    {
        printf("Tiger\n");
    }
    else if (p>t)
    {
        printf("Pathan\n");
    }
    else{
        printf("Draw\n");
    }
    
    
    return 0;
}