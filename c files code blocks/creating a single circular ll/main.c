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
    printf("Enter data of Node 1 : ");
    scanf("%d",&data);
    head=malloc(sizeof(struct node));
    head->x=data;
    head->link=head;
    return head;
}
struct node* addend(struct node* tail,int i)
{
    int data;
    struct node* temp=malloc(sizeof(struct node));
    printf("Enter data of Node %d : ",i);
    scanf("%d",&data);
    temp->x=data;
    temp->link=tail->link;
    tail->link=temp;
    tail=tail->link;
    return tail;
}
int count(struct node* head)
{
    struct node* ptr=head;
    int count=0;
    while(ptr->link!=head)
    {
        ptr=ptr->link;
        count++;
    }
    return ++count;
}
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
int search(int element,struct node* head,int *index)
{
    int found=0;
    struct node* ptr=head;
    do
    {
        (*index)++;
        if(ptr->x==element)
        {
            found=1;
            break;
        }
        ptr=ptr->link;
    }
    while(ptr!=head);
    return found;
}
int main()
{
    int n,element,found,index=-1;;
    struct node* head=NULL,*tail, *ptr;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    if(n==0)
        return 0;
    head=addnode(head);
    tail=head;
    for(int i=2; i<=n; i++)
    {
        tail=addend(tail,i);
    }
    printf("The number of elements : %d\n", count(head));
    print(head);
    printf("Enter the element u want to search : ");
    scanf("%d",&element);
    found=search(element,head,&index);
    if(found==1)
    printf("The element is at index %d \n",index);
    else printf("Not found brother");
}
