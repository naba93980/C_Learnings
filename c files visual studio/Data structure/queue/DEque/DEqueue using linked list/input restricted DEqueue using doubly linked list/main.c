#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *front = NULL, *rear = NULL;
int count = 0;
void rearenque(int data)
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
            ptr->next = NULL;
            ptr->prev = NULL;
        }
        else
        {
            ptr->prev = rear;
            ptr->next = NULL;
            rear->next = ptr;
            rear = ptr;
        }
        printf("rearenqueued value = %d at position %d\n", rear->data, ++count);
    }
    return;
}
void frontdeque()
{
    if (front == NULL && rear == NULL)
        printf("Queue empty\n");
    else
    {
        struct node *ptr;
        ptr = front;
        printf("frontdequeued value = %d\n", front->data);
        front = front->next;
        if (front == NULL)
            front = NULL;
        else
            front->prev = NULL;
        free(ptr);
        count--;
    }
    return;
}
void reardeque()
{
    if (front == NULL && rear == NULL)
        printf("Queue empty\n");
    else
    {
        struct node *ptr;
        ptr = rear;
        printf("reardequeued value = %d\n", rear->data);
        rear = rear->prev;
        if (rear == NULL)
            front = NULL;
        else
            rear->next = NULL;
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
    while (ptr != NULL)
    {
        printf("The element at pos %d : %d\n", ++pos, ptr->data);
        ptr = ptr->next;
    }
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
    int countt = 0;
    while (pos > 1)
    {
        countt++;
        if (ptr->next == NULL)
            break;
        ptr = ptr->next;
        pos--;
    }
    printf("The value at position %d: %d\n", countt, ptr->data);
}
void reverse()
{
    struct node *prev = NULL, *next = NULL;
    rear = front;
    while (front->next != NULL)
    {
        next = front->next;
        front->next = prev;
        front->prev = next;
        prev = front;
        front = next;
    }
    front->next = prev;
    front->prev = NULL;
}
int main()
{

    rearenque(10);
    rearenque(20);
    rearenque(50);
    rearenque(60);
    traverse();
    frontdeque();
    reardeque();
    traverse();
    peek();
    frontval();
    rearval();
    pos(3);
    reverse();
    traverse();
    return 0;
}