#include <stdio.h>

void main() 
{
 int num,rot,a,b;
 printf("enter n value\n");
 scanf("%d",&num);
 printf("\nenter number of rotations");
 scanf("%d",&rot);
 while(rot>0)
 {
     a=num%10000;
     b=num/10000;
     num=b+a*10;
    rot--;
  }
 printf("\nafter rotation%d",num);
}
