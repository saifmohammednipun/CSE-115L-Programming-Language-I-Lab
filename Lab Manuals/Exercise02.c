
#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter two integers:");
   scanf("%d%d",&a,&b);

   switch(a>b)
   {
    case 0:
        printf("Maximum is %d",b);
        break; 
    
    case 1:
       printf("Maximum is %d",a);
       break;
       
       default:
       printf("Inputs are invalid");
    
     }
  
  return 0;
}