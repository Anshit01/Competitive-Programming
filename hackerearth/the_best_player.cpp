#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    
    int n, t, k, i;
    int q[1000];
    char s[1000][30];
    char temp[30];
    
    scanf("%d %d", &n, &t);
    
    for(i=0;i<n;i++){
        scanf("%s %d",s[i], (q+i));
    }
    int tmp;
    for(k=0;k<n;k++){
        
        for(i=0;i<n-k;i++){
            
           if(*(q+i) < *(q+i+1)){
               
               strcpy(temp,s[i]); 
               strcpy(s[i],s[i+1]);
               strcpy(s[i+1],temp);
               tmp = q[i];
               q[i] = q[i+1];
               q[i+1] = tmp;
           }
           
           else if(*(q+i) == *(q+i+1)){
               
                if(strcmp(s[i],s[i+1])>0){
                   
                    strcpy(temp,s[i]); 
                    strcpy(s[i],s[i+1]);
                    strcpy(s[i+1],temp);
                    tmp = q[i];
                    q[i] = q[i+1];
                    q[i+1] = tmp;
               }
           }
        }
    }
    
    for(i=0;i<t;i++){
        printf("%s\n", s[i]);
    }
    
    return 0;
}