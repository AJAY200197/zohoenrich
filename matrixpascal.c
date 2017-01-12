#include <stdio.h>
int main()
{
   int a[10][10],i=0,j=0;
   for(i=1;i<=6;i++)
   {
       for(j=1;j<=6;j++)
       {
         if((i==j) || (i==1)) 
          {a[i][1]=1;
           a[i][j]=1;
          }
         else 
          {
            a[i][j]=i-1;
            a[i][j]=a[i-1][j-1]+a[i-1][j];
          }
           
       }
   }    
  for(i=1;i<=6;i++)
   {
      for(j=1;j<=6;j++)
       {  
           if(i>=j)
             printf("%d\t",a[i][j]);
     }printf("\n");
      
  }

}
