#include <stdio.h>
#include <stdlib.h>
struct node{
struct node* prev;
struct node* next;
int x;
};
struct node* addempty(struct node* head, int data)  //O(1)
{
    head=malloc(sizeof(struct node));
    head->next=NULL;
    head->prev=NULL;
    head->x=data;
    return head;
}
struct node* addend(struct node* head, int data)
{
    struct node* temp=malloc(sizeof(struct node)),*ptr;
    temp->x=data;
    ptr=head;
    while(ptr->next!=NULL)   //O(n)
          ptr=ptr->next;
    ptr->next=temp;
    temp->prev=ptr;
    temp->next=NULL;
    return head;

}
int main()
{
    int n,data;
    struct node* head=NULL,*ptr;
    printf("Enter the number of nodes you want to create  ");
    scanf("%d",&n);
    if(n==0)
        return 0;
    printf("Enter the data for node 1  ");
    scanf("%d",&data);
    head=addempty(head,data);
    for(int i=2;i<=n;i++)
    {
       printf("Enter the data for node %d  ",i);
       scanf("%d",&data);
       head=addend(head,data);
    }

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->x);
        ptr=ptr->next;
    }
    return 0;
}
