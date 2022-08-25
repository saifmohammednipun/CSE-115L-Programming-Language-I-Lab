
#include <stdio.h>
 int sum (int n){
     int i, sum=0;
      for(i=1;i<=n;i++){
         sum=sum+i*i;
      }
     
    return sum;
    
 }
 int main(){
     int n;
 printf("Enter n: ");
 scanf("%d",&n);
 
 int s=sum (n);
 printf("Sum of the serise:%d",s);
 }