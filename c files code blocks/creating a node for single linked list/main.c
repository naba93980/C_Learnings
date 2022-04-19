#include <stdio.h>
#include <stdlib.h>
struct node{
int x;
struct node *link;
};

int main()
{
    struct node* head; //defining initial head pointer which will point to the first node.
    struct node a; //defining a node as a variable here.
    head = &a; //assigning address of the node to the head pointer
    head->x=5000; //using the pointer to assign (not initialized because initializing is done at the time of definition) a value to the  member of the node.
    head->link=NULL;
    printf("%d",head->x); //again accessing the value of member of the node using the pointer.
    return 0;
}
