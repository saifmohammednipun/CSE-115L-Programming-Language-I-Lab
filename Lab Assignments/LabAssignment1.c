#include<stdio.h>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE];
    int size ;
    int i, j, k,temp=0;

    printf("Insert size of the array :") ;
    scanf("%d", &size);
     printf("Insert elements in array :\n");
        
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
         for(i=0; i<size; i++)
        {

         for(j=i+1; j<size; j++)

         {

            if(arr[i] == arr[j])

            {

               for(k=j; k < size - 1; k++)

              {
                arr[k] = arr[k + 1];
              }
                size--;

                j--;
             }
         }
     }
     for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[j] <arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
     printf("\nElements of array in sorted ascending order and eleminated all repeated integers values:\n");
   
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
     return 0;
}