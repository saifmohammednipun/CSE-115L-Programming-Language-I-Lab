#include <stdio.h>
int main()
{
 
int n;

printf("Enter the number of elements: ");
scanf ("%d",&n);

   int arr [n];

  for(int i=0;i<n;i++)
  {
    printf("Enter the element: ");
    scanf("%d", &arr[i]);
  }
 
  int* ptr=arr;
  
  for (int i=0;i<n;i++)
  {
     printf("%d, %d \n",i,&ptr[i]);
  }

return 0;
}