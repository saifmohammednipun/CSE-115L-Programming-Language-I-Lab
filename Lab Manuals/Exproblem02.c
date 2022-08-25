
#include <stdio.h>
int main()
{
  int a;
  printf("Enter the age of employee:");
  scanf("%d",&a);

  if(a>=25 && a<=45){
    printf("S/he is eligible to work");
  }

  else{
    printf("You are to young or to old");
  }
return 0;

}
