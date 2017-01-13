#include<stdio.h>
void main()
{
  int i,j,k,a=1,b,n;
  scanf("%d",&n);
  b=(n/2+1);
  for(i=0;i<=5;i++)
  {
    for(j=0;j<b;j++)
    {
      printf(" ");
     }
   for(k=0;k<a;k++)
   {
    if(k%2!=0)
     {
       printf("*");
      }
    else
     {
       printf(" ");
     }
   }
  printf("\n");
  a=a+2;
  b--;
  }
}
