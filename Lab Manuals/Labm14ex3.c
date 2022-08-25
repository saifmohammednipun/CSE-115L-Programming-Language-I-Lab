//Write a program that prints ALL indexes in which the largest value of array is present

#include <stdio.h>
int main()
{
    int i;
    int arr[]={1,23,7,5,30};
    for(i=0;i<5;i++){
        printf("%d,",arr[i]);
    }
     printf("\n");
      int max= arr[0];
    for(i=1;i<5;i++){
        if(max<arr[i])
           max=arr[i];

    }
    printf("Largest element=%d",max);



    
    return 0;
}