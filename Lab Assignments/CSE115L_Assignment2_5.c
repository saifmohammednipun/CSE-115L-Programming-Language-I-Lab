#include<stdio.h>

int multiply(int x, int y) 
{
  
   if(x == 1)
   {
     return y;
   }
   
   else
   {
      return y+multiply(x-1,y);
   }

}

int main() {
        
        int x,y;
        
        
        printf("Enter first integer: ");
        scanf("%d",&x);
        
        
        printf("Enter second integer: ");
        scanf("%d",&y);
        
        
        printf("Product = %d\n",multiply(x,y));
        
       
        return 0;
}