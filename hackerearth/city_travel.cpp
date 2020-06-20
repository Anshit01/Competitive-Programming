#include<stdio.h>

int main(){
   
   int s,x,n,i=1,j, t[n],y[n], tmp;
   int sum=0, count=0;
   
   scanf("%d %d %d", &s, &x, &n);
   
   for(i=0;i<n;i++){
      scanf("%d %d", &t[i],&y[i]);
   }
   
   
   for(j=0;j<n;j++){
      for(i=0;i<n-j-1;i++){
         if(t[i]>t[i+1]){
            
            tmp = t[i];
            t[i] = t[i+1];
            t[i+1] = tmp;
         
      
            tmp = y[i];
            y[i] = y[i+1];
            y[i+1] = tmp;
         }
      }
   }
   
   i=0;
   sum=0;
   count=0;
   
   while(sum<s){
      
       count++;
      
      if(i<n && t[i]==count){
         sum += y[i];
         i++; 
      }
      
      else{
         sum += x;
      }
      
   }
   
   printf("%d", count);
   return 0;
}