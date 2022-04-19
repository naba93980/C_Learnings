#include <stdio.h>
#include <stdlib.h>
struct node
{
    int x;
    struct node* link;
};
struct node* addend(struct node* p,int x)
{
    p->link=malloc(sizeof(struct node));
    p->link->x=x;
    p->link->link=NULL;
    return p->link;
}
struct node* delbeg(struct node* head)
{
    struct node* p;
    p=head;
    head=head->link;
    free(p);
    p=NULL;
    return head;
}

struct node* delend(struct node* head)
{
    struct node* ptr=head;
    if(ptr==NULL)
    {
        printf("Empty boi\n");
        return NULL;
    }
    else
    {
        if(ptr->link==NULL)
        {
            free(ptr);
            ptr=NULL;
            printf("nothing left now\n");
            return ptr;
        }
        else
        {
            while(ptr->link->link!=NULL)
            {
                ptr=ptr->link;
            }
            free(ptr->link);
            ptr->link=NULL;
            return head;
        }
    }
}

void delpos(struct node* head,int pos)
{
    struct node* ptr=head, *temp;
    int count=2;
    while(count<=pos-1)
    {
        ptr=ptr->link;
        count++;
    }
    temp=ptr->link->link;
    free(ptr->link);
    ptr->link=temp;
}

struct node* delsll(struct node* head)
{
    struct node* temp;
    while(head!=NULL)
    {
        temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
    return head;
}

struct node* revsll(struct node* head)
{
        struct node *temp=NULL,*temp2=NULL;
        if(head->link==NULL)
            return head;
        temp=head;
        head=head->link;
        temp->link=NULL;
        while(head->link!=NULL)
        {
            temp2=head->link;
            head->link=temp;
            temp=head;
            head=temp2;
        }
        head->link=temp;
        return head;


}
void print(struct node* p)
{
    if(p==NULL)
    printf("EMPTY");
    else
    {
        while(p!=NULL)
        {
            printf("%d  ",p->x);
            p=p->link;
        }
    }
}

int main()
{
    //int position;
    struct node* head=malloc(sizeof(struct node));
    struct node* ptr;
    head->x=5;
    head->link=NULL;
    ptr=head;
   // ptr=addend(ptr,10);
    ptr=addend(ptr,15);
    ptr=addend(ptr,20);
    ptr=addend(ptr,25);
    ptr=addend(ptr,30);
    ptr=addend(ptr,35);
    ptr=addend(ptr,40);
    ptr=addend(ptr,45);
    print(head);
   // printf("\n");
    //head=delbeg(head);
   // head=delbeg(head);
   // head=delbeg(head);
   // head=delend(head);
    //head=delend(head);
    //head=delend(head);
    //print(head);        //WHEN THERE IS RETURN TYPE IN FUNCTION THEN RETURN STATEMENT IS MANDATORY.

    printf("\n");
    /*printf("enter the position");
    scanf("%d",&position);
    if(position==1)
        head=delbeg(head);
    else
    delpos(head,position);*/
    //head=delsll(head);
    head=revsll(head);
    print(head);
    return 0;
}
