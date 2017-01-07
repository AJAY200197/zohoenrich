#include<stdio.h>
void main()
{
    int n;
    int i,j,k,iold,jold;
    printf ("Enter   ");
    i=0;
    j=n/2;
    A[i][j]=1;
    for(k=2;k<=n*n;k++)
    {
        iold=i;
        jold=j;
        if(i==0)
            i=n-1;
        else
            i=i-1;
        if(j==n-1)
            j=0;
        else
            j=j+1;
        while(A[i][j]!=0)
        {
            if(i==n-1)
                i=0;
            else
                i=iold+1;
                j=jold;
        }
        A[i][j]=k;
     }
 }
 for  (i=0;i <n;i++)
 {
            for(j=0; j<n;j++)
            {
             printf("%d",&A[i][j]);
             }
 }
}
