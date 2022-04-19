#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int x;
    struct node* link;
};
struct node* addnode(struct node* head)
{
    int data;
    printf("enter data : ");
    scanf("%d",&data);
    head=malloc(sizeof(struct node));
    head->x=data;
    head->link=head;
    return head;
};
struct node* addbeg(struct node* tail, struct node**head)
{
    int data;
    struct node *temp;
    temp=malloc(sizeof(struct node));
    printf("Enter data to be added at beginning : ");
    scanf("%d",&data);

    temp->link=tail->link;
    tail->link=temp;
    temp->x=data;
    *head=temp;
    return tail;
};
struct node* addend(struct node* tail)
{
    int data;
    struct node* temp=malloc(sizeof(struct node));
    printf("Enter value to be added at end  ");
    scanf("%d",&data);
    temp->x=data;
    temp->link=tail->link;
    tail->link=temp;
    tail=tail->link;
    return tail;
};
struct node* addpos(struct node** head,struct node*tail)
{
    int pos,data;
    printf("Enter position : ");
    scanf("%d",&pos);
    if(pos==1)
    {
        addbeg(tail,head);
        return tail;
    }
    struct node* ptr=(*head),*temp=malloc(sizeof(struct node));
    printf("Enter value : ");
    scanf("%d",&data);
    temp->x=data;
    if(pos==8)
    {
        temp->link=tail->link;
        tail->link=temp;
        tail=temp;
    }
    else
    {
        while(pos-1>1)
        {
            ptr=ptr->link;
            pos--;
        }
        temp->link=ptr->link;
        ptr->link=temp;

    }
    return tail;
}
struct node* delbeg(struct node* head,struct node* tail)
{
    tail->link=head->link;
    free(head);
    head=tail->link;
    return head;

}
struct node* delend(struct node* head,struct node* tail)
{
    struct node* ptr=head;
    while(ptr->link->link!=head)
    {
        ptr=ptr->link;
    }
    free(ptr->link);
    ptr->link=head;
    tail=ptr;
    return tail;

};
struct node* delpos(struct node* head,struct node* tail)
{
    int pos;
    struct node* ptr=head,*temp;
    printf("Enter position you want to delete : ");
    scanf("%d",&pos);
    if(pos==1)
    {
        tail->link=delbeg(head,tail);
        return tail;
    }
    if(pos==6)
    {
        tail=delend(head,tail);
        return tail;
    }
    else
    {
        while(pos-1>1)
        {
            ptr=ptr->link;
            pos--;
        }
        temp=ptr->link;
        ptr->link=temp->link;
        free(temp);
    }
    return tail;

};
void print(struct node* head)
{
    struct node* ptr=head;
    while(ptr->link!=head)
    {
        printf("%d ",ptr->x);
        ptr=ptr->link;
    }
    printf("%d",ptr->x);
    printf("\n");
}
int main()
{
    struct node* head=NULL,*tail, *ptr;
    head=addnode(head);
    tail=head;
    tail=addbeg(tail,&head);
    tail=addbeg(tail,&head);
    tail=addbeg(tail,&head);
    tail=addbeg(tail,&head);
    tail=addend(tail);
    tail=addend(tail);
    ptr=head;  // or we can use ptr=tail->link;
    print(ptr);
    tail=addpos(&head,tail);
    ptr=head;
    print(ptr);
    head=delbeg(head,tail);
    ptr=head;
    printf("After deletion from beggining\n");
    print(ptr);
    tail=delend(head,tail);
    ptr=head;
    printf("After deletion of end node\n");
    print(ptr);
    tail=delpos(head,tail);
    head=tail->link;
    ptr=head;
    printf("After deletion of certain node\n");
    print(ptr);

    return 0;
}
