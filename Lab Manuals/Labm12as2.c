#include <stdio.h>
int fun (int a, int b){
    int i,product=1;
 for(i=1;i<=b;i++){
     product=product*a;
  }
      return product;
} 
int main()
{
    int a,b;
    printf("Enter base,a: ");
    scanf("%d",&a);
    printf("Enter power,b: ");
    scanf("%d",&b);
    
    printf("%d",fun(a,b));
}
