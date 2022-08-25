#include <stdio.h>
#include <math.h>
 int main(){
     int i,n;
     double sum=1;
     printf("Enter n: ");
     scanf("%d",&n);
    
    for(i=1;i<=n;i++){
          sum = sum + (1 / pow(3 , i));
    }
 
 printf("Sum of the serise:%.5lf",sum);
 }