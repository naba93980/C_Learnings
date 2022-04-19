#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    char *a;
    int top;
    int size;
};
void push(char c, struct stack *s)
{
    s->top++;
    s->a[s->top] = c;
}
void pop(struct stack *s)
{
    s->a[s->top] = 0;
    s->top--;
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
int is_match(char c, struct stack *s)
{
    if (c == ')' && s->a[s->top] == '(')
        return 1;
    if (c == '}' && s->a[s->top] == '{')
        return 1;
    if (c == ']' && s->a[s->top] == '[')
        return 1;
    return 0;
}
int main()
{
    char exp[99] = "([{2+3(5*[3])}-(5(2+5)(5*4+5))])";
    struct stack *s = malloc(sizeof(struct stack));
    s->top = -1;
    // printf("Enter the expression\n");
    // fgets(exp, 99, stdin);
    //exp[strlen(exp) - 1] = '\0';
    s->size = strlen(exp);
    printf("The entered expression : %s\n", exp);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            if (is_full(s))
            {
                printf("stack overflow\n");
                exit(0);
            }
            push(exp[i], s);
        }
        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (is_empty(s))
            {
                printf("The expression is not balanced\n");
                exit(0);
            }
            if (!is_match(exp[i], s))
            {
                printf("The expression is not balanced\n");
                exit(0);
            }
            pop(s);
        }
    }
    if (is_empty(s))
        printf("The expression is balanced\n");
    else
        printf("The expression is not balanced\n");
    return 0;
}