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
char *intopost(char *infix, char *postfix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = sizeof(char) * (strlen(infix));
    s->c = (char *)malloc(sizeof(char) * (strlen(infix)));
    int i, j = 0;
    for (int i = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] == '(')
            push(infix[i], s);
        else if (infix[i] == ')')
        {
            while (s->c[s->top] != '(')
            {
                postfix[j] = pop(s);
                j++;
            }
            int useless = pop(s);
        }

        else if (operator(infix[i]))
        {
            if (is_empty(s))
                push(infix[i], s);
            else if (precedence(infix[i]) > precedence(s->c[s->top]))
                push(infix[i], s);
            else
            {
                while (precedence(infix[i]) <= precedence(s->c[s->top]))
                {
                    postfix[j] = pop(s);
                    j++;
                    if (s->top == -1)
                        break;
                }
                push(infix[i], s);
            }
        }
        else
        {
            postfix[j] = infix[i];
            j++;
        }
    }
    while (s->top != -1)
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *infix = "(x/y+u*(v-w))"; //"(p/(q-r)*s+t)"; "(a+b)*c"; "(a+(b*c)/(d-e))";
    char postfix[strlen(infix) + 1];
    printf("the postfix expressin :  %s", intopost(infix, postfix));
    return 0;
}