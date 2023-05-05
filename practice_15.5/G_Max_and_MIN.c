#include<stdio.h>
#include<limits.h>
void max_min(int r){
    int d[r];
    for (int i = 0; i <r; i++)
    {
        scanf("%d",&d[i]);
    }
    int min=d[0],max=d[0];
    for (int i = 1; i <r; i++)
    {
        if (d[i]>max)
        {
            max=d[i];
        }
        if (d[i]<min)
        {
            min=d[i];
        }
        
    }
    printf("%d %d",min,max);

}
int main(){
    int r;
    scanf("%d",&r);
    max_min(r);
    return 0;
}