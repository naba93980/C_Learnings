#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int f;
    int r;
    int size;
    int *quearr;
};
int isfull(struct queue *q)
{
    if ((q->f == 0 && q->r == q->size - 1) || (q->r + 1) % q->size == (q->f))
        return 1;
    return 0;
}
int isempty(struct queue *q)
{
    if ((q->r == q->f))
        return 1;
    return 0;
}
void enque(struct queue *q, int val)
{

    if (isfull(q))
    {
        printf("queue full\n");
    }
    else
    {
        if (q->f == -1 && q->r == -1)
        {
            q->r++;
            q->f++;
        }
        else
            q->r = (q->r + 1) % q->size;

        q->quearr[q->r] = val;
        printf("enqueued value = %d\n", q->quearr[q->r]);
    }
}
int deque(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue empty");
        exit(0);
    }
    q->f;
    int val = q->quearr[q->f];
    q->f++;
    return val;
}

/*
int peek(struct queue *q)
{
    return q->quearr[q->f + 1];
}
int front(struct queue *q)
{
    return q->quearr[q->f + 1];
}
int rear(struct queue *q)
{
    return q->quearr[q->r];
}
int pos(struct queue *q, int pos)
{
    return q->quearr[q->f + pos];
}
void traverse(struct queue *q)
{
    for (int i = q->f + 1; i <= q->r; i++)
    {
        printf("%d   ", q->quearr[i]);
    }
    printf("\n");
}
void rev(struct queue *q, int start, int end)
{
    int temp;
    if (start >= end)
        return;
    temp = q->quearr[start];
    q->quearr[start] = q->quearr[end];
    q->quearr[end] = temp;
    start++;
    end--;
    rev(q, start, end);
    return;
}
*/
int main()
{
    struct queue *q = malloc(sizeof(struct queue));
    q->f = -1;
    q->r = -1;
    q->size = 4;
    q->quearr = malloc(sizeof(int) * q->size);
    enque(q, 10);
    enque(q, 20);
    enque(q, 30);
    enque(q, 40);
    enque(q, 50);
    enque(q, 60);
    //printf("successfully injected %d values in queue\n", q->r + 1);
    printf("dequeued value : %d\n", deque(q));
    enque(q, 50);
    enque(q, 60);
    enque(q, 60);
    printf("dequeued value : %d\n", deque(q));
    printf("dequeued value : %d\n", deque(q));
    enque(q, 60);
    enque(q, 70);
    enque(q, 80);

    /*
    printf("dequeued value : %d\n", deque(q));
    printf("dequeued value : %d\n", deque(q));
    printf("dequeued value : %d\n", deque(q));
    printf("dequeued value : %d\n", deque(q));
    printf("dequeued value : %d\n", deque(q));
    printf("peek value : %d\n", peek(q));
    printf("queue front value : %d\n", front(q));
    printf("queue rear value : %d\n", rear(q));
    printf("The element at postion 3 : %d\n", pos(q, 3));
    printf("before rev: ");
    traverse(q);
    rev(q, q->f + 1, q->r);
    printf("after rev: ");
    traverse(q);
    printf("queue front value : %d\n", front(q));
    printf("queue rear value : %d\n", rear(q));*/

    return 0;
}
