#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,d,m,c,s,p,q;
    scanf("%d%d%d",&c,&m,&s);
    d=c;
    p=m;
    q=s;
    if (c==1)
    {
        printf("1\n");
    }
    else if(c!=0 && s!=0){
        r=m;
        c=abs(c-m);
        s=abs(s-m);
        if (d<m)
        {
            printf("%d\n",d);
        }
       else if(q<c || q<m){
        printf("%d\n",q);
       }
       else if(s>=c/2){
            printf("%d\n",r+(c/2));
        }
        else{
            printf("%d\n",r);
        }
    }
    else{
        printf("0\n");
    }
    
    return 0;
}