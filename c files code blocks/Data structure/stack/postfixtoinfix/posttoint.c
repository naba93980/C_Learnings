#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    char *c;
    int size;
    int top;
};
int operator(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*')
        return 1;
    return 0;
}
int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '/' || c == '*')
        return 2;
    if (c == '(')
        return 0;
}
int is_empty(struct stack *s)
{
    if (s->top == -1)
        return 1;
    return 0;
}
int is_full(struct stack *s)
{

    if (s->top == s->size - 1)
        return 1;
    return 0;
}
void push(char c, struct stack *s)
{
    if (is_full(s))
    {
        printf("stack overflow\n");
        exit(0);
    }
    s->top++;
    s->c[s->top] = c;
    printf("pushed : %c\n", s->c[s->top]);
}
char pop(struct stack *s)
{
    char c;
    if (is_empty(s))
    {
        printf("stack underflow\n");
        exit(0);
    }
    c = s->c[s->top];
    printf("popped : %c\n", c);
    s->top--;
    return c;
}

int stackvalue(struct stack *s)
{
    int pos = s->size - s->top;
    int value = s->c[s->top];
    if (s->top == 0)
    {
        s->c[pos - 1] = value;
        return ++(s->top);
    }
    else
    {
        s->top--;
        s->top = stackvalue(s);
        s->c[pos - 1] = value;
        return ++(s->top);
    }
}
int reverse(struct stack *s)
{
    s->top = stackvalue(s);
    return --(s->top);
}
char *posttoin(char *postfix, char *infix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = sizeof(char) * (strlen(postfix));
    s->c = (char *)malloc(sizeof(char) * (strlen(postfix)));
    int i, j = 0;
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        if (!operator(postfix[i]))
        {
            push(postfix[i], s);
        }
        else
        {
            char x = pop(s);
            push(postfix[i], s);
            push(x, s);
        }
    }
    s->top = reverse(s);
    while (s->top != -1)
    {
        infix[j] = pop(s);
        j++;
    }
    infix[j] = '\0';
    return infix;
}
int main()
{
    char *postfix = "abc*de-/+";
    char infix[strlen(postfix) + 1];
    printf("the infix expressin :  %s", posttoin(postfix, infix));
    return 0;
}