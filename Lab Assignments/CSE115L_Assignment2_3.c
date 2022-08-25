
#include <stdio.h>
#include <string.h>

  
void reverse(char* str, int count) 
{
   if (count==0) {
       return;
   }

   int first=0;
   int second=0;
   int len=0;

   
   for (int i=0;i<strlen(str); i++) {
       if(str[i] == ' ' && first == 0) {
           first = i;
           len++;
           if (len == count) {
              break;
           }
       } else if(str[i] == ' ') {
           second = first+1;
           first = i;
           len++;
           if (len == count) {
               break;
           }
       }
   }


   if(first == 0 && second == 0) {
       return;
   }
   int flag = 0;
    for(int i = first; i >= 0; i--) {
       char temp = str[i];
       for(int k = i; k < strlen(str) - 1; k++) {
           if(flag > 2 && k == (strlen(str) - flag)) {
               k = strlen(str);
           } else {
               str[k] = str[k+1];
           }
        }
   
    if(i == second) {
        i = 0;
    }
    if (flag == 0) {
        str[(strlen(str) - 1) - flag] = temp;
        flag++;
    } else {
        str[(strlen(str) - flag)] = temp;
        flag++;
    }
}

count = len;
reverse(str, count - 1);
}



 int main()
{
   char string[] = "cat is running";          

  

   reverse(string, -1);                
   printf("%s\n", string);

   
   return 0;
}


