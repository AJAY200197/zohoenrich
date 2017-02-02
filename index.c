#include <stdio.h>
int main(void) 
{
    int a[20],n,i,k;
    for(i=0;i<20;i++)
     {
        scanf("%d",&a[i]);
    }
    printf("enter key");
    scanf("%d",&k);
    for(i=0;i<20;i++)
     {
        if(a[i]==k)
            {
            printf("%d",i);
            break;
            }  
        
    }
    return 0;
}
