#include <stdio.h>
#include <stdlib.h>
struct node
{
  int x;
  struct node *link;
};

int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->x=1;
    head->link=(struct node*)malloc(sizeof(struct node));
    head->link->x=2;
    head->link->link=(struct node*)malloc(sizeof(struct node));
    head->link->link->x=3;
    head->link->link->link=NULL;
    printf("1st node = %d\n2nd node = %d\n3rd node = %d\n",head->x=1,head->link->x=2,head->link->link->x=3);
    printf("1st node address = %d\n2nd node address = %d\n3rd node address = %d",head,head->link,head->link->link);
    return 0;
}
