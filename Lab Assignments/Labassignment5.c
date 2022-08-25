#include <stdio.h>
#include <string.h>
int count(char str[],char ch){
    int c=0;
    for(int i=0;str[i]!='\0';++i){
        if(ch==str[i]) {
            ++c;
        }
    }
    return c;
}
int main(){
  
  char str[100],str2[100];
  printf("Enter String:");
  gets(str);
  strcpy(str2,str);
  int length= strlen(str);
  
    for(int i=0; i<length; i++){
       char ch = str[i];
    
    for(int j=i+1; j<length; ){
        if(str[i] == str[j]){
         for(int k=j; k<length; k++){
         str[k] = str[k+1];
        }
        length--;
    } 
      else {

          j++;
      }
    }
  }
for(int i=0;i<strlen(str);i++)
{
  printf("%c%d",str[i],count(str2,str[i]));
}
  return 0;
}
