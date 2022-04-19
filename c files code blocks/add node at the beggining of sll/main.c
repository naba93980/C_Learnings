#include <stdio.h>
#include <stdlib.h>
struct node{
int x;
struct node* link;
};

struct node* addbeg(struct node*head,int newdata)
{
    struct node* newhead=malloc(sizeof(struct node));
    newhead->x=newdata;
    newhead->link=head;
    head=newhead;
    return head;
}
int main()
{
    struct node* head=malloc(sizeof(struct node)),*p;
    head->x=5;
    head->link=malloc(sizeof(struct node));
    head->link->x=10;
    head->link->link=NULL;
    head=addbeg(head,15);
    head=addbeg(head,2);
    head=addbeg(head,200);
    p=head;
    while(p!=NULL){
    printf("%d\n",p->x);
    p=p->link;}
}
