#include<string.h>
#include<stdio.h>
main()
{
    char a[100],b[100]={0};
    printf("Enter string");
    gets(a);  
    int len,i,j,count,k=0;
    len=strlen(a);
    for(i=0;i<len;i++)
   {
        count=0;
        for(j=0;j<i;j++)
        {
            if(a[i]==b[j])
            {    
                count++;
            }
        }
        if(count==0)
        {
            b[k++]=a[i];
        }
    }
    printf("Output string:%s",b);
}
