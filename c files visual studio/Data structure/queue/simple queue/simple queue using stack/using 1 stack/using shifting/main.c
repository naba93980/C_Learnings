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
    return stack[0];
}
void deque()
{
    int start = 0, end = top, temp;
    printf("Element popped : %d\n", pop());
    start = 0, end = top, temp;
    for (int i = 1; i <= top; i++)
    {
        stack[i - 1] = stack[i];
    }
    top--;
}
void traverse()
{
    int count = 0;
    while (count <= top)
    {
        printf("%d  ", stack[count++]);
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
    traverse();
    printf("front = %d, rear = %d\n", stack[0], stack[top]);

    return 0;
}