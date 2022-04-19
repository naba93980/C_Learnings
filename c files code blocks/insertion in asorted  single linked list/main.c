#include <stdio.h>
#include <stdlib.h>
struct node
{
    int x;
    struct node *link;
};
int main()
{
    struct node* ptr;
    int flag=0, n;
    printf("enter n : ");
    scanf("%d",&n);
    struct node*p = (struct node*) malloc(sizeof(struct node));
    p->x=5;
    p->link=malloc(sizeof(struct node));
    p->link->x=10;
    p->link->link=malloc(sizeof(struct node));
    p->link->link->x=15;
    p->link->link->link=malloc(sizeof(struct node));
    p->link->link->link->x=20;
    p->link->link->link->link=NULL;
    struct node* temp=malloc(sizeof(struct node));
    temp->x=n;
    ptr=p;
    if(temp->x<p->x)
    {
        temp->link=p;
        p=temp;
        ptr=p;
    }
    else
    {
        while(p->link!=NULL)
        {
            if(temp->x < p->link->x)
            {
                temp->link=p->link;
                p->link=temp;
                flag=1;
                break;
            }
            p=p->link;
        }
        if(flag==0)
        {
            p->link=temp;
            temp->link=NULL;
        }
    }
    while(ptr->link!=NULL)
    {
        printf("%d ",ptr->x);
        ptr=ptr->link;
    }
    printf("%d  ",ptr->x);
    printf("\n");
    return 0;
}
