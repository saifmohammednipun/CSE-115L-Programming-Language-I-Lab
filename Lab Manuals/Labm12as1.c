#include <stdio.h>
double sum (int n){
    double i,sum=0,fact=1;
   for(i=1;i<=n;i++)
     {
       fact=fact*i;
       sum=sum+1/fact;
    }
    return sum; 
    }
    int main(){
        int n;
    printf("Enter n:");
    scanf("%d",&n);
    
    double s= sum(n);
    printf("sum:%.2lf",s);

}
