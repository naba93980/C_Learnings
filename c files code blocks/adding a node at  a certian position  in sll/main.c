#include <stdio.h>
#include <stdlib.h>
struct node{
int x;
struct node*link;
};
struct node* addend(struct node*p,int data)
{
    struct node*ptr=malloc(sizeof(struct node));
    ptr->x=data;
    ptr->link=NULL;
    p->link=ptr;
    return ptr;
}
void addloc(struct node*p,int data)
{
    int pos;
    printf("enter position\n");
    scanf("%d",&pos);
    int count=2;        //jei position e dhukamu er thika 2 ta kom count hoibo, 7th position e dhukaite hoile 6th position opdi aite hoibo
    while(count<=pos-1)
    {
        p=p->link;
        count++;
    }
    struct node* temp=p->link;
    p->link=malloc(sizeof(struct node));
    p=p->link;
    p->link=temp;
    p->x=data;
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->x=5;
    head->link=NULL;
    struct node *p=head;
    p=addend(p,10);
    p=addend(p,15);
    p=head;
    addloc(p,3);
    addloc(p,66);
    addloc(p,89);
    while(p!=NULL)
    {
        printf("%d\n",p->x);
        p=p->link;
    }
    return 0;
}
