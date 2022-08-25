#include <stdio.h>
int main()
 {
    int arr1[10], arr2[10], arr3[10];
    int i,j=0,k=0,n;
    printf("Input size of the array: ");
    scanf("%d",&n);  
    printf("Input elements in array: ");
    for(i=0;i<n;i++)
        {
	      scanf("%d",&arr1[i]);
	    }
    for(i=0;i<n;i++)
    {
	    if (arr1[i]%2 == 0)
	    {
	        arr2[j] = arr1[i];
	        j++;
	    }
	    else
	    {
	        arr3[k] = arr1[i];
	        k++;
	    }
    }
    printf("Even elements in array ");
    for(i=0;i<j;i++)
        {
	    printf("%d ",arr2[i]);
        }
    printf("\nOdd elements in array: ");
    for(i=0;i<k;i++)
        {
	    printf("%d ", arr3[i]);
        }
}