#include <stdio.h>
int stack[10];
int top = -1;
void enque(int x)
{
    top++;
    stack[top] = x;
    printf("element enqueued %d\n", stack[top]);
    return;
}
int pop()
{
    return stack[top--];
}
void deque()
{

    int value = pop();
    if (top == -1)
        return;
    deque();
    stack[++top] = value;
    return;
}
void traverse()
{
    int count = 0;
    while (top != -1)
    {
        printf("%d  ", stack[count++]);
        printf("\n");
        top--;
    }
}
int main()
{

    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    deque();
    deque();
    //traverse();
    printf("front = %d, rear = %d\n", stack[0], stack[top]);

    return 0;
}