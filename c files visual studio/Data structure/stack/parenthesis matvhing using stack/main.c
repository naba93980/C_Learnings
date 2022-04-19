#include <stdio.h> //2+3-(1*5+4-((3/3)*4)+5)
#include <stdlib.h>
#include <string.h>
struct node
{
    char data;
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
struct node *push(char data, struct node *top)
{
    if (isfull())
        printf("stack overflow\n");
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
    {
        printf("stack underflow\n");
        return top;
    }
    struct node *temp;
    temp = top;
    printf("element popped : %c\n", temp->data);
    top = top->next;
    free(temp);
    return top;
}
void print(struct node *head)
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("stack empty");
        return;
    }
    while (ptr->next != NULL)
    {
        printf("%c,", ptr->data);
        ptr = ptr->next;
    }
    printf("%c,\n", ptr->data);
}
int main()
{
    char a[50];
    printf("enter the expression\n");
    fgets(a, 50, stdin);
    a[strlen(a) - 1] = '\0';
    printf("%d\n", strlen(a));
    printf("%s\n", a);
    struct node *top = NULL, *bottom = NULL;
    for (int i = 0; i < strlen(a); i++)
    {

        if (a[i] == '(')
            top = push(a[i], top);
        if (a[i] == ')')
            top = pop(top);
    }
    print(top);

    return 0;
}