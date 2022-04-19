#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int *arr;
    int top;
} * s1, *s2;
int isfull(struct stack *s1)
{
    if (s1->top == s1->size - 1)
        return 1;
    return 0;
}
int isempty(struct stack *s1)
{
    if (s1->top == -1)
        return 1;
    return 0;
}
void push1(int x)
{
    ++(s1->top);
    s1->arr[(s1->top)] = x;
    return;
}
int pop1()
{
    return s1->arr[s1->top--];
}
void push2(int x)
{
    ++(s2->top);
    s2->arr[s2->top] = x;
    return;
}
int pop2()
{
    return s2->arr[s2->top--];
}
void enque(int x)
{
    if (isfull(s1))
    {
        printf("queue full\n");
        return;
    }
    if (s1->top == -1)
        push1(x);
    else
    {
        while (s1->top != -1)
            push2(pop1());
        push1(x);
        while (s2->top != -1)
        {
            push1(pop2());
        }
    }
    printf("Enqueued : %d\n", s1->arr[0]);
    return;
}
void deque()
{
    if (isempty(s1))
    {
        printf("Queue empty\n");
        return;
    }
    printf("Element dequed : %d\n", pop1());
    return;
}
void traverse()
{
    if (isempty(s1))
    {
        printf("queue empty\n");
        return;
    }
    int count = s1->top;
    while (count != -1)
    {
        printf("%d  ", s1->arr[count--]);
    }
    printf("\n");
    return;
}
void front()
{
    if (isempty(s1))
    {
        printf("queue empty\n");
        return;
    }
    printf("front : %d\n", s1->arr[s1->top]);
    return;
}
void rear()
{
    if (isempty(s1))
    {
        printf("queue empty\n");
        return;
    }
    printf("rear : %d\n", s1->arr[0]);
    return;
}
void peek()
{
    if (isempty(s1))
    {
        printf("queue empty\n");
        return;
    }
    printf("peek : %d\n", s1->arr[s1->top]);
    return;
}
void reverse(int start, int end)
{
    if (isempty(s1))
    {
        printf("queue empty\n");
        return;
    }
    if (start >= end)
        return;
    int temp;
    temp = s1->arr[start];
    s1->arr[start] = s1->arr[end];
    s1->arr[end] = temp;
    start++;
    end--;
    reverse(start, end);
    return;
}
int main()
{
    s1 = malloc(sizeof(struct stack));
    s2 = malloc(sizeof(struct stack));
    s1->top = -1;
    s2->top = -1;
    s1->size = 5;
    s2->size = 5;
    s1->arr = malloc(20);
    s2->arr = malloc(20);
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    enque(60);
    enque(70);
    traverse();

    deque();
    deque();
    traverse();
    peek();
    front();
    rear();
    traverse();
    reverse(0, s1->top);
    traverse();
    peek();
    front();
    rear();

    return 0;
}