#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int is_full(struct stack *s)
{
    if(s->top==((s->size)-1))
        return 1;
    else return 0;
}
int is_empty(struct stack *s)
{
    if((s->top)<0)
        return 1;
    else return 0;
}
void push(struct stack *s, int x)
{
    if(is_full(s))
        printf("stack overflow\n\n");
    else
    {
        (s->top)++;
        (s->arr)[s->top]=x;
        printf("Element pushed is %d\n\n",(s->arr[s->top]));
    }
}
void pop(struct stack *s)
{
    if(is_empty(s))
        printf("stack underflow\n\n");
    else
    {
        printf("Element popped is %d\n\n",(s->arr[s->top]));
        (s->top)--;
    }
}
int peek(struct stack *s)
{
    return s->arr[s->top];
}
int traverse(struct stack *s, int pos)
{
    return s->arr[(s->top)-pos];
}
int stacktop(struct stack *s)
{
    return s->arr[s->top];
}
int stackbottom(struct stack *s)
{
    return s->arr[0];
}
int main()
{
    struct stack *s=malloc(sizeof(struct stack));
    int i;
    s->size=5;
    s->top=-1;
    s->arr=malloc(sizeof(int)*(s->size));
    int element;
    int decision;
    while(1)
    {
        printf("Do you want to push : 1/0\n");
        scanf("%d",&decision);
        if(decision==0)
            break;
        printf("Enter elements you want to push : ");
        scanf("%d",&element);
        push(s,element);
    }

    while(1)
    {
        printf("Do u want to pop elements : 1/0 ");
        scanf("%d",&decision);
        if(decision==0)
            break;
        pop(s);
    }
    printf("The element at the top is : %d\n\n", peek(s));
    for(i=0; i<=(s->top); i++)
    {
        printf("The element at the position %d is : %d\n",i+1, traverse(s,i));
    }
    printf("\nThe element at the top is : %d", peek(s));
    printf("\n\nStack top : %d",stacktop(s));
    printf("\n\nStack bottom : %d",stackbottom(s));
    printf("\nEnter the position u wanna access : ");
    scanf("%d",&i);
    if(i<1||i>(s->top)+1)
        printf("error");
    else
        printf("\nThe element at position %d : %d",i,traverse(s,i-1));
    return 0;
}
