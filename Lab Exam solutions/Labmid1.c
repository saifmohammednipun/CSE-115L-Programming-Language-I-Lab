#include<stdio.h>

int main()
{
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int monno;
   printf("Input Month No : ");
   scanf("%d",&monno);
   switch(monno)
   {
 
 
 case 1:
        printf("Name of the month: January\n");
        printf("Last day of January is:%d\n",days[0]);
        printf("It is %d days of the year",d[0]);
        break;
 
 
 case 2:
        printf("Name of the month: February\n");
        printf("Last day of February is:%d\n",days[1]);
        printf("It is %d days of the year",d[0]+d[1]);
        break;
 
 
 case 3:
        printf("Name of the month: March\n");
        printf("Last day of March is:%d\n",days[2]);
        printf("It is %d days of the year",d[0]+d[1]+d[2]);
        break;
 
 
 case 4:
        printf("Name of the month: April\n");
        printf("Last day of April is:%d\n",days[3]);
                printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]);
        break;
 
 
 case 5:
        printf("Name of the month: May\n");
        printf("Last day of May is:%d\n",days[4]);
                printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]+d[4]);
        break;


 case 6:
        printf("Name of the month: June\n");
        printf("Last day of June is:%d\n",days[5]);
        printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]+d[4]+d[5]);
        break;
 
 case 7:
        printf("Name of the month: July\n");
        printf("Last day of July is:%d\n",days[6]);
         printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]);
        break;
 
 
 case 8:
        printf("Name of the month: August\n");
        printf("Last day of August is:%d\n",days[7]);
        printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]);
        break;
 
 
 case 9:
        printf("Name of the month: September\n");
        printf("Last day of September is:%d\n",days[8]);
         printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8]);
        break;

 case 10:
        printf("Name of the month: October\n");
        printf("Last day of October is:%d\n",days[9]);
         printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8]+d[9]);
        break;
 case 11:
        printf("Name of the month: November\n");
        printf("Last day of November is:%d\n",days[10]);
         printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8]+d[9]+d[10]);
        break;
 case 12:
        printf("Name of the month: December\n");
        printf("Last day of December is:%d\n",days[11]);
           printf("It is %d days of the year",d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8]+d[9]+d[10]+d[11]);
        break;
 default:
        printf("invalid Month number. \nPlease try again ....\n");
        break;


    return 0;
}
}
