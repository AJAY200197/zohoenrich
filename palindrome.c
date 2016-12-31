#include <stdio.h>

int main() {
    int num,n,rev=0,rem;
    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        rev=(rev*10)+rem;
    }
    if(n==rev)
    {
        printf("Yes %d is palindrome",n);
    }
    else
    {
        printf("NO %d is not palindrome",n);
    }
	// your code goes here
	return 0;
}
