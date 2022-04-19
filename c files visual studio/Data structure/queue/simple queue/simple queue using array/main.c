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
    if (q->r == q->size - 1)
        return 1;
    return 0;
}
int isempty(struct queue *q)
{
    if (q->r == -1 && q->f == -1)
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
        if (q->f == -1)
        {
            q->f = 0;
            q->r = 0;
        }
        else
            q->r++;

        q->quearr[q->r] = val;
        printf("value enqueued : %d\n", q->quearr[q->r]);
    }
}
void deque(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue empty\n");
        return;
    }
    if (q->f == q->r)
    {
        int val = q->quearr[q->f];
        q->f = -1;
        q->r = -1;
        printf("value dequeued : %d\n", val);
        return;
    }
    else
    {
        int val = q->quearr[q->f];
        q->f++;
        printf("value dequeued : %d\n", val);
        return;
    }
}
void peek(struct queue *q)
{
    printf("peek value : %d\n", q->quearr[q->f]);
    return;
}
void front(struct queue *q)
{
    printf("queue front value : %d\n", q->quearr[q->f]);
    return;
}
void rear(struct queue *q)
{
    printf("queue rear value : %d\n", q->quearr[q->r]);
    return;
}
void pos(struct queue *q, int pos)
{
    printf("The element at postion %d : %d\n", pos, q->quearr[pos - 1]);
    return;
}
void traverse(struct queue *q)
{
    for (int i = q->f; i <= q->r; i++)
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
    /* deque(q);
    deque(q);
    deque(q);
    deque(q);
    deque(q);
    deque(q);*/
    peek(q);
    front(q);
    rear(q);
    pos(q, 3);
    printf("before rev: \n");
    traverse(q);
    rev(q, q->f, q->r);
    printf("after rev: ");
    traverse(q);
    front(q);
    rear(q);
    deque(q);
    deque(q);
    traverse(q);
    printf("%d...%d...\n", q->f, q->r);
    deque(q);
    deque(q);
    deque(q);
    deque(q);
    return 0;
}
