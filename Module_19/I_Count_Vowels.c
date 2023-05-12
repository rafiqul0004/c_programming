#include<stdio.h>
#include<string.h>
int vowel(char d[], int i){
    if(d[i]=='\0') return 0;
    int ans=vowel(d,i+1);
    if(d[i]>='A' && d[i]<='Z'){
    d[i]=d[i]+32;
    }
    if(d[i]=='a' || d[i]=='e' || d[i]=='i' || d[i]=='o' || d[i]=='u'){
     return ans+1;
    }
    else{
        return ans;
    }
}
int main(){
    char d[205];
    fgets(d,205,stdin);
    int count=vowel(d,0);
    printf("%d\n",count);
    return 0;
}