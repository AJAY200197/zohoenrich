#include<stdio.h>
main()
{
	int a[10][10],i,j,k=1,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%2==0)
			{
				a[i][j]=k;
				k++;
			}
			else
			{
				a[i][n-(j+1)]=k;
				k++;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
