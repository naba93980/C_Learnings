#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int isfull()
{
    struct node *ptr = malloc(sizeof(struct node));
    if (ptr == NULL)
        return 1;
    free(ptr);
    return 0;
}
int isempty(struct node *top)
{
    if (top == NULL)
        return 1;
    return 0;
}
struct node *push(int data, struct node *top)
{
    if (isfull())
        printf("stack overflow");
    else
    {
        struct node *new = malloc(sizeof(struct node));
        new->data = data;
        new->next = top;
        top = new;
    }
    return top;
}
struct node *pop(struct node *top)
{
    if (isempty(top))
        printf("stack underflow");
    struct node *temp;
    temp = top;
    printf("element popped : %d\n", temp->data);
    top = top->next;
    free(temp);
    return top;
}
void peek(struct node *top)
{
    printf("The element at top is : %d\n", top->data);
}
void traverse(struct node *top)
{
    struct node *ptr = top;
    int pos = 0;
    while (ptr != NULL)
    {
        printf("The element at pos %d : %d\n", ++pos, ptr->data);
        ptr = ptr->next;
    }
}
int pos(int pos, struct node *ptr)
{
    while (pos > 1)
    {
        if (ptr->next == NULL)
        {
            return -1;
        }
        ptr = ptr->next;
        pos--;
    }
    return ptr->data;
}
void stacktop(struct node *top)
{
    printf("stack top : %d\n", top->data);
}
void stackbottom(struct node *bottom)
{
    printf("stack bottom : %d\n", bottom->data);
}
struct node *reverse(struct node *top)
{
    struct node *head = top, *prev = NULL, *nxt = NULL;
    while (head->next != NULL)
    {
        nxt = head->next;
        head->next = prev;
        prev = head;
        head = nxt;
    }
    head->next = prev;
    return head;
}
void print(struct node *head)
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("stack empty");
    }
    while (ptr->next != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
}
int main()
{
    struct node *top = NULL, *bottom = NULL;
    top = push(10, top);
    bottom = top;
    top = push(20, top);
    top = push(30, top);
    top = push(40, top);
    top = push(50, top);
    top = push(60, top);
    printf("before popping \n");
    print(top);
    top = pop(top);
    //top = pop(top);
    // top = pop(top);
    //top = pop(top);
    //top = pop(top);
    // top = pop(top);
    printf("after popping \n");
    print(top);
    peek(top);
    traverse(top);
    printf("Element at position 3 : %d\n", pos(3, top));
    stacktop(top);
    stackbottom(bottom);
    printf("Before reverrsing\n");
    print(top);
    stacktop(top);
    stackbottom(bottom);
    //-----------------------------------------gondogol starts here.
    bottom=top;
    top = reverse(top);
    printf("after reversing pointer :\n");
    print(top);
    stacktop(top);
    stackbottom(bottom);
    return 0;
}
