#include <stdio.h>
#include <stdlib.h>
struct node
{
  int x;
  struct node *link;
};

void addnode(struct node* head, int newdata)
{
   struct node* ptr=head;
   while(ptr->link!=NULL)
   {
       ptr=ptr->link;
   }
   ptr->link=(struct node*)(malloc(sizeof(struct node)));
   ptr=ptr->link;
   ptr->x=newdata;
   ptr->link=NULL;
}

void print(struct node* head)
{   int count=0;
    struct node* ptr=head;
    while(ptr!=NULL)
    {   count++;
        printf("The data in the node %d is %d\n",count,ptr->x);
        ptr=ptr->link;
    }
}


int main()
{
    int newdata;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->x=1;
    head->link=(struct node*)malloc(sizeof(struct node));
    head->link->x=2;
    head->link->link=(struct node*)malloc(sizeof(struct node));
    head->link->link->x=3;
    head->link->link->link=NULL;
    printf("enter data for new  node\n");
    scanf("%d",&newdata);
    addnode(head,newdata);
    print(head);
    return 0;
}
