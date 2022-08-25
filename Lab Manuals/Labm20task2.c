#include <stdio.h>
#include <stdlib.h>

int* sumArrays(int *arr1, int *arr2, int dim1,int dim2)
{
     int *ret = NULL;

    if(dim1<dim2)
    {
     ret = (int*) malloc(dim2*sizeof(int));
    }
    else 
    {
      ret = (int*) malloc(dim1*sizeof(int));
    }
    if(ret)
    {
    if(dim1<dim2) 
    {
     int i=0;
     for (i=0;i<dim1;i++) 
     {
     ret[i] = arr1[i] + arr2[i];
     }
     for (i = dim1; i < dim2;i++) 
     {
     ret[i]=arr2[i];
     }   
   } 
   else 
   {
   int i=0;
   for (i = 0;i < dim2;i++) 
   {
     ret[i] = arr1[i] + arr2[i];
   }
  for (i = dim2; i < dim1;i++)
   {
     ret[i]=arr1[i];
   }
  }
}
 return ret;
}

int main()
{
int a[] = {1,2,3,4};
int b[] = {1,2,3,4};
int sizeA = sizeof(a) / sizeof(*a);
int sizeB = sizeof(b) / sizeof(*b);


int *c = sumArrays(a,b,sizeA,sizeB);
printf("Sum:");

  
for (int i = 0; i <(sizeA<sizeB?sizeB:sizeA); i++)
   {
      printf("%d,",c[i]);
   }
}

