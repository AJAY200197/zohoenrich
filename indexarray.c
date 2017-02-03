#include<stdio.h>
int main() 
{
	int a[10],b[10],key,i,n;
	scanf("%d",&n);
	printf("Input\nArray:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("Number to Search:");
	scanf("%d",&key);
		for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            b[i]=i;
            printf("%d,",b[i]);
        }
    }
	return 0;
}
