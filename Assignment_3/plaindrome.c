#include<stdio.h>
#include<string.h>
int is_plaindrome(char *r){
     int sz,c=1;
     sz=strlen(r);
    int i=0,j=sz-1;
    while(i<j){
        if(r[i++]!=r[j--]){
            c=0;
            break;
        }
    }
    if (c>0)
    {
        return 1;
    }
    else{
        return 0;
    } 
}
int main(){
    int c;
    char r[100];
    scanf("%s",r);
    c=is_plaindrome(r);
    if (c==1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    } 
    return 0;
}