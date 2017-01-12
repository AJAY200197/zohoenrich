#include <stdio.h>
int main()
{
   int a,c=1,i=0,ser;
   printf("enter the no:");
   scanf("%d",&a);
   while(i<a)
   {
     ser = ser + c;
     c++;i++;
     printf("%d\t",ser);
       
   }
    return 0;
     
   
}
