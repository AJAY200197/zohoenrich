#include<stdio.h>
int main()
{
 int  a[20],b[10],i,j=0,k,t,l,n,temp=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   if ((a[i])%2 == 0)
   {
    b[j] = a[i];
    j++;
   }
  }
 t=j;
 for(k=0;k<t;k++)
 {
    for(l=k+1;l<t;l++)
    {
        if(b[l]<b[k])
        {
            temp = b[k];
            b[k]= b[l];
            b[l]= temp;
        }
    }
 }
 printf("%d",b[t-2]);
 
}
