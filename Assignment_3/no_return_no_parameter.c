#include<stdio.h>
void area(){
    float pi=3.1416,area;
    int r;
    scanf("%d",&r);
    area=pi*(r*r);
    printf("%.2f\n",area);
}
int main(){
    area();
    return 0;
}