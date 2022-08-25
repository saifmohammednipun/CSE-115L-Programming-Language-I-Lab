#include <stdio.h>
void find_Fact(int n, int *f){
    int i;

    *f =1;
    
    for(i=1;i<=n;i++){
       *f = *f * i;
    }
       
}

int main()
{
        int fact,num;	
		
        printf("Input a number: ");
		scanf("%d",&num);		 

        find_Fact(num,&fact);
        printf("The Factorial of %d is: %d",num,fact);
         
        
        return 0;

}

