#include<string.h>
#include <stdio.h>
int main(){
    char a[100];
    int i,n,temp=0;
    printf("enter the string");
        scanf("%s",a);
    int len;
    len = strlen(a);
   for(i=0;i<len;i++)
      {    
       if(a[i]==a[len-i-1])
           temp = 1;
            break;
      }
    if(temp==1)
        printf("palindrome");
    else
        printf("not palindrome");
}
