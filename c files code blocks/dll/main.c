#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int x;
    struct node *next;
};
struct node* adnode(struct node* head, int x)
{
    head=malloc(sizeof(struct node));
    head->prev=NULL;
    head->next=NULL;
    head->x=x;
    return head;
}
struct node* addbeg(struct node* head, int x)
{
    struct node* temp=malloc(sizeof(struct node));
    head->prev=temp;
    temp->next=head;
    temp->prev=NULL;
    temp->x=x;
    head=temp;
    return head;
}
struct node* addend(struct node* head, int x)
{
    struct node* temp=malloc(sizeof(struct node)),*ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
    temp->next=NULL;
    temp->x=x;
    return head;
}
struct node* addpos(struct node* head, int pos,int data)
{
    struct node* temp=malloc(sizeof(struct node)),*ptr,*temp2;
    temp->x=data;
    ptr=head;
    if(pos==1)
        head=addbeg(head,data);
    else{
    while(pos-1>1)
    {
        ptr=ptr->next;
        pos--;
    }
    if(ptr->next==NULL)
    {
        ptr->next=temp;
        temp->prev=ptr;
        temp->next=NULL;
        printf("IF");
    }
    else
    {
        temp2=ptr->next;
        ptr->next=temp;
        temp->prev=ptr;
        temp->next=temp2;
        temp2->prev=temp;
        printf("ELSE  ");
    }}
    return head;
}
void delend(struct node* head)
{
    while(head->next->next!=NULL)
        head=head->next;
    free(head->next);
    head->next=NULL;
}
struct node * delbeg(struct node* head)
{
    head=head->next;
    free(head->prev);
    head->prev=NULL;
    return head;
}
void delpos(struct node* head,int pos)
{
    struct node* ptr=head,*temp;
    while(pos-1>1)
    {
        ptr=ptr->next;
        pos--;
    }
    temp=ptr->next->next;
    free(ptr->next);
    temp->prev=ptr;
    ptr->next=temp;
};
struct node * revdll(struct node* head)
{
    struct node *temp;
    temp=head;
    head=head->next;
    temp->prev=head;
    temp->next=NULL;
    while(head->next!=NULL)
    {
        temp=head;
        head=head->next;
        temp->next=temp->prev;
        temp->prev=head;
    }
    head->next=head->prev;
    head->prev=NULL;
    return head;
}

int main()
{
    int pos;
    /* struct node* head = malloc(sizeof(struct node));
     head->prev=NULL;
     head->next=NULL;
     head->x=45;*/
    struct node* head=NULL,*ptr;
    head=adnode(head,5);
    //head=adnode(head,10);
    head=addbeg(head,15);
    head=addend(head,20);
    head=addend(head,25);
    head=addend(head,30);
    printf("Enter position ");
    scanf("%d",&pos);
    head=addpos(head,pos,50);
    printf("BEFORE DEL\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->x);
        ptr=ptr->next;
    }
    printf("\n");
    delend(head);
   //head=delbeg(head);
    printf("AFTER DEL\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->x);
        ptr=ptr->next;
    }
    printf("\n");
   /* printf("Enter postion to be deleted  ");
    scanf("%d",&pos);
    delpos(head,pos);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->x);
        ptr=ptr->next;
    }*/
    head=revdll(head);
    printf("\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d  ",ptr->x);
        ptr=ptr->next;
    }
    return 0;
}
