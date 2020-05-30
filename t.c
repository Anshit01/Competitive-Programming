#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
   
  long  int i , t, x[10*5] ;
   long int a=0, b=7 ;
   char *ch1 = "A" ;
   char *ch2 = "B" ;
   long int diff1, diff2 ;
   char result ;
   
   scanf("%d", &t);
   for(i=0;i<t;i++){
      scanf("%ld", &x[i]);
   }
   
   for(i=0;i<t;i++){
      
         diff1 = x[i] - a ;
         diff2 = x[i] - b ;
         
         if(diff1<0){
            diff1 = diff1*(-1) ;
        }
        
        if(diff2<0){
           diff2 = diff2*(-1) ;
        }
        
        if(diff1<diff2){
           puts(ch1) ;
           a = x[i] ;
        }
        
        if(diff2<diff1){
           puts(ch2);
           b = x[i];
        }
        
        if(diff1 == diff2){
           
           if(a<b){
              puts(ch1);
           }
           
           else{
              puts(ch2);
           }
        }
      
   }
   
   
}