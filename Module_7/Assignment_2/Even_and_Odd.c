#include<stdio.h>
int main(){
    int r,i,d,ev=0,od=0;
    scanf("%d",&r);
    for ( i = 1; i <=r; i++)
    {
        scanf("%d",&d);
        if(d%2==0)
		{
          ev=ev+d;
         }
        else{
         od=od+d;
         }
    }
    printf("%d %d\n",ev,od);
    
    return 0;
}
