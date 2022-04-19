#include <stdio.h>
int stack[10];
int top = -1;
void enque(int x)
{
    top++;
    stack[top] = x;
    printf("Element enqueued %d\n", stack[top]);
    return;
}
int pop()
{
    return stack[top--];
}
void deque()
{
    int start = 0, end = top, temp;
    for (int i = 0; i <= top; i++)
    {
        temp = stack[start];
        stack[start] = stack[end];
        stack[end] = temp;
        start++;
        end--;
        if (start >= end)
            break;
    }
    printf("Element popped : %d\n", pop());
    start = 0, end = top, temp;
    for (int i = 0; i <= top; i++)
    {
        temp = stack[start];
        stack[start] = stack[end];
        stack[end] = temp;
        start++;
        end--;
        if (start >= end)
            break;
    }
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
    //deque();
    //traverse();
    printf("front = %d, rear = %d\n", stack[0], stack[top]);

    return 0;
}