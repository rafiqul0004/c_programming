#include<stdio.h>
void vote(int age){
if (age>=18){
    printf("Eligible\n");
}
else{
    printf("Not Eligible\n");
}

}
int main(){
    int age;
    scanf("%d",&age);
    vote(age);
    return 0;
}