#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *front = NULL, *rear = NULL;
int count = 0;
void enque(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
        printf("Queue full\n");
    else
    {
        ptr->data = data;
        if (front == NULL && rear == NULL)
        {
            front = rear = ptr;
        }
        else
        {
            rear->link = ptr;
            rear = ptr;
        }
        rear->link = front;
        printf("Enqueued value = %d at position %d\n", rear->data, ++count);
    }
    return;
}
void deque()
{
    if (front == NULL && rear == NULL)
        printf("Queue empty\n");
    else
    {
        struct node *ptr;
        ptr = front;
        printf("Dequeued value = %d\n", front->data);
        if ((front == rear) && (front != NULL))
        {
            front = rear = NULL;
        }
        else
        {
            front = front->link;
            rear->link = front;
        }
        free(ptr);
        count--;
    }
    return;
}
void traverse()
{
    if (front == NULL && rear == NULL)
        printf("Queue empty\n");
    struct node *ptr = front;
    int pos = 0;
    while (ptr->link != front)
    {
        printf("The element at pos %d : %d\n", ++pos, ptr->data);
        ptr = ptr->link;
    }
    printf("The element at pos %d : %d\n", ++pos, ptr->data);
}
void peek()
{
    printf("The element at peek = %d\n", front->data);
}
void frontval()
{
    printf("The element at front = %d\n", front->data);
}
void rearval()
{
    printf("The element at rear = %d\n", rear->data);
}
void pos(int position)
{
    int pos = position;
    struct node *ptr = front;
    while (pos > 1)
    {
        ptr = ptr->link;
        pos--;
    }
    printf("The value at position %d: %d\n", position, ptr->data);
}
void reverse()
{
    struct node *prev = NULL, *next = NULL;
    rear = front;
    while (front->link != rear)
    {
        next = front->link;
        front->link = prev;
        prev = front;
        front = next;
    }
    front->link = prev;
    rear->link = front;
}
int main()
{
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    deque();
    traverse();
    peek();
    frontval();
    rearval();
    enque(50);
    pos(4);
    reverse();
    traverse();
    return 0;
}