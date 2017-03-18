#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct link
{
  int num;
  struct link *addr;
}*head;
void create(int n)
{
    int i,d;
    struct link *temp,*t1;
    for(i=0;i<n;i++)
    {
        temp=(struct link *)malloc(sizeof(struct link));
        scanf("%d",&d);
        if(head==NULL)
        {
            temp ->num=d;
            temp ->addr=NULL;
            head=temp;
            t1=temp;
        }
        else
        {
            temp ->num=d;
            temp ->addr=NULL;
            t1 ->addr=temp;
            t1=t1 ->addr;
        }
    }
}
void search(int key)
{
    int count=0;
    struct link *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr ->num==key)
        {
            printf("%d\n",count);
            printf("%u",ptr ->addr);
        }
        ptr=ptr ->addr;
        count++;
    }
}
void display()
{
    struct link *t;
    t=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(t!=NULL)
        {
            printf("%d",t ->num);
            t=t->addr;
        }
    }
}
int main(void) {
	int n,key;
	scanf("%d",&n);
	create(n);
	scanf("%d",&key);
	search(key);
	display();
	return 0;
}
