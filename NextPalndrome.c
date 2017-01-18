#include <stdio.h>
int main(void)
{
	int j,l,n,m;
	scanf("%d",&n);
	l=n;
	j=l/100;
	while(n!=0)
	{
       	   m=n;
      	   n=n/10;
	}
	m=j;
	printf("%d0%d",j,m);
	return 0;
}
