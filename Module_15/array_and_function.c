#include<stdio.h>
// void fun(double r[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%0.2lf\n",r[i]);
//     }
    
// }
void fun(double *r,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%0.2lf\n",r[i]);
    }
}
    
int main(){
    double r[6]={12.12,10.3,40.5,50.6,60.7,70.67};
    fun(r,6);
    return 0;
}