#include <stdio.h>
#include <stdlib.h>
struct node
{
  int x;
  struct node *link;
};

int count(struct node *head)
{
   int count=0;
   while(head!=NULL)
    {
       printf("The elements in the node %d is %d\n",count+1,head->x);
       head=head->link;
       count++;
   }
   return count;
}

int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->x=1;
    head->link=(struct node*)malloc(sizeof(struct node));
    head->link->x=2;
    head->link->link=(struct node*)malloc(sizeof(struct node));
    head->link->link->x=3;
    head->link->link->link=NULL;
    printf("1st node = %d\n2nd node = %d\n3rd node = %d\n",head->x,head->link->x,head->link->link->x);
    printf("1st node address = %d\n2nd node address = %d\n3rd node address = %d\n",head,head->link,head->link->link);
    printf("Total number of nodes %d",count(head));
    return 0;
}
