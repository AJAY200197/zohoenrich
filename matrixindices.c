#include <stdio.h>
int main(){
    int a[10][10],i,j,n,m,k;
    printf("enter size of matrix");
     scanf("%d%d",&m,&n);
    printf("enter k value");
     scanf("%d",&k);
    printf("matrix");
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
        {
          if(k==(i+j))
             a[i][j]=1;
          else
             a[i][j]=0;
        }
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
         printf("%d\t",a[i][j]);
      printf("\n");
  
}
