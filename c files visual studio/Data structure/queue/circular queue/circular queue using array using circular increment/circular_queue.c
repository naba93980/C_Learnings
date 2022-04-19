#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int flag = 0, flag1 = 0;
struct queue
{
    int f;
    int r;
    int size;
    int *quearr;
};
int isfull(struct queue *q)
{
    if ((q->r + 1) % q->size == (q->f))
        return 1;
    return 0;
}
int isempty(struct queue *q)
{
    if ((q->r == -1 && q->f == -1))
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
void deque(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue empty");
    }
    if (q->f == q->r)
    {
        int val = q->quearr[q->f];
        printf("dequeued val : %d\n", val);
        q->r = -1;
        q->f = -1;
    }
    else
    {
        int val = q->quearr[q->f];
        q->f = (q->f + 1) % q->size;
        printf("dequeued val : %d\n", val);
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
}
void rear(struct queue *q)
{
    printf("queue rear value : %d\n", q->quearr[q->r]);
}
int pos(struct queue *q, int pos)
{
    printf("The element at position %d : %d\n", pos, q->quearr[pos - 1]);
}
void traverse(struct queue *q)
{
    int i;
    for (i = q->f; i != (q->r); i = ((i + 1) % q->size))
    {
        printf("%d   ", q->quearr[i]);
    }
    printf("%d\n", q->quearr[i]);
}
void rev1(struct queue *q, int start, int end)
{
    int temp;
    if (start >= end)
        return;
    temp = q->quearr[start];
    q->quearr[start] = q->quearr[end];
    q->quearr[end] = temp;
    start++;
    end--;
    rev1(q, start, end);
    return;
}
void rev2(struct queue *q, int start, int end)
{
    printf("------------");
    int temp;
    // flag = 0, flag1 = 0;//flags and flag1 must be global variable, bcoz if it is local then every time in new call stack the variables are created and initialized to zero, so the value set to 1 (if condition matches in last function) becomes useless and doesnot stop or return the function.
    if (end == -1)
    {
        end = q->size - 1;
        flag = 1;
    }
    if (start == q->size)
    {
        start = q->size - q->size;
        flag1 = 1;
    }
    if (start >= end && flag == 1)
        return;
    if (start >= end && flag1 == 1)
        return;
    if (start < end && flag1 == 1 && flag == 1)
        return;
    temp = q->quearr[start];
    q->quearr[start] = q->quearr[end];
    q->quearr[end] = temp;
    start++;
    end--;
    rev2(q, start, end);
    return;
}
void reverse(struct queue *q, int start, int end)
{
    if (q->r >= q->f)
        rev1(q, start, end);
    else if (q->r < q->f)
        rev2(q, start, end);
    return;
}
int main()
{
    struct queue *q = malloc(sizeof(struct queue));
    q->f = -1;
    q->r = -1;
    q->size = 6;
    q->quearr = malloc(sizeof(int) * q->size);
    memset(q->quearr, -1, q->size * sizeof(int)); //memset works effetively only with 0 & -1
    enque(q, 10);
    enque(q, 20);
    enque(q, 30);
    enque(q, 40);
    enque(q, 50);
    enque(q, 60);
    enque(q, 70);
    deque(q);
    enque(q, 70);
    enque(q, 80);
    enque(q, 90);
    deque(q);
    deque(q);
    enque(q, 80);
    enque(q, 90);
    enque(q, 100);
    peek(q);
    front(q);
    rear(q);
    pos(q, 3);
    printf("before rev: ");
    traverse(q);
    reverse(q, q->f, q->r);
    printf("after rev: ");
    traverse(q);
    front(q);
    rear(q);
    pos(q, 4);
    return 0;
}
