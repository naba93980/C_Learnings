#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int is_empty(struct stack* s)
{
    if(s->top==-1)
        return 1;
    else return 0;
}
int is_full(struct stack* s)
{
    if(s->top==(s->size)-1)
        return 1;
    else return 0;
}

int main()
{
    struct stack *s=malloc(sizeof(struct stack));
    s->arr=NULL;
    printf("Enter the number of elements in the stack ");
    scanf("%d",&(s->size));
    s->top=-1;
    s->arr=(int *)malloc(4*(s->size));
    if(is_empty(s))
        printf("stack is empty\n");
    if(is_full(s))
        printf("stack is full");
    return 0;
}
