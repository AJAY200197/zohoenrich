#include<stdio.h>
main()
{
  int a[100];
  int n,i,k,count=0;
  printf("enter size");
   scanf("%d",&n);
  printf("array");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("enter the no. to be counted");
    scanf("%d",&k);
  for(i=0;i<n;i++)
   {
    if(a[i]==k)
     {count++;}
   }
  printf("%d occurs %d times",k,count);
}
      
