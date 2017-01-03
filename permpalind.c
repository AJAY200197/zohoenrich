#include<stdio.h>
int main()
{
	char c[50];
	printf("Input:\n");
	gets(c);
	int i,l,j,count=1,t=0;
	l=strlen(c);
	for(i=0;i<l;i++)
	{
		while(c[i]!='\0')
		{
		for(j=i+1;j<l;j++)
		{
			if(c[i]==c[j])
			{
				count++;
				c[j]='\0';
			}
		}
		if((count%2)!=0)
		{
			t++;
		}
		break;
		}
	}
	printf("Output:\n");
	if(t>=2)
	{
		printf("False");		
	}
	else
	{
		printf("True");
	}
}
