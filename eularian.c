#include<stdio.h>
void main()
{
int a[10][10],i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=0;j<i;j++)
{
if(j==0||j==i-1)
{
a[i][j]=1;
}
else
{
a[i][j]=((i-j)*a[i-1][j-1]+(j+1)*a[i-1][j]);
}
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
