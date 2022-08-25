#include <stdio.h>

int main()
{
    int arr[20],num,i;
    float avg=0,sum=0;
printf("Enter size: ");
    scanf("%d",&num);
printf("Enter elements: \n");
    for(i=1; i<=num; i++){
        scanf("%d", &arr[i]);
    }
    for(i=1; i<=num; i++){
        sum=sum+arr[i];
        avg=sum/num;
    }
    printf("Average=%f\n",avg);
    for(i=0;i<num;i++){
        if(arr[i]>avg){ 
        printf("The elements are greater than average are:%d\n",arr[i]);
     }
    }

    
    return 0;
}