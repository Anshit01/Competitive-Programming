#include<stdio.h>
int main(){
    int n,x=0,y=0;
    char c[100];
    scanf("%d",&n);
    scanf("%s", c);
    for(int i =0;i<n;i++){
        if(c[i]=='W'){
            x=x+1;
        }
        else if(c[i]=='S'){
            x=x-1;
        }
        else if(c[i]=='A'){
            y=y-1;
        }

        else if(c[i]=='D'){
            y=y+1;
        }
    }

    printf("%d\n",(n-(x+y)));


}