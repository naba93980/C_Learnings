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
void frontenque(struct queue *q, int val)
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
        {
            if (q->f == 0)
                q->f = q->size - 1;
            else
                q->f--;
        }
        q->quearr[q->f] = val;
        printf("frontenqueued value = %d  at index %d\n", q->quearr[q->f], q->f);
    }
    return;
}
void rearenque(struct queue *q, int val)
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
        {
            q->r = (q->r + 1) % q->size;
        }
        q->quearr[q->r] = val;
        printf("rearenqueued value = %d at index %d\n", q->quearr[q->r], q->r);
    }
    return;
}
void frontdeque(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue empty\n");
    }
    else
    {
        if (q->f == q->r)
        {
            int val = q->quearr[q->f];
            printf("frontdequeued val : %d from index %d\n", val, q->f);
            q->r = -1;
            q->f = -1;
        }
        else
        {
            int val = q->quearr[q->f];
            printf("frontdequeued val : %d from index %d\n", val, q->f);
            q->f = (q->f + 1) % q->size;
        }
    }
    return;
}
void reardeque(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue empty\n");
    }
    else
    {
        if (q->f == q->r)
        {
            int val = q->quearr[q->r];
            printf("reardequeued val : %d from %d\n", val, q->r);
            q->r = -1;
            q->f = -1;
        }
        else
        {
            int val;
            if (q->r == 0)
            {
                printf("reardequeued val : %d from %d\n", val, q->r);
                q->r = q->size - 1;
            }
            else
            {
                val = q->quearr[q->r];
                printf("reardequeued val : %d from index %d\n", val, q->r);
                q->r--;
            }
        }
    }
    return;
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
    printf("------------\n");
    int temp;
    // flag = 0, flag1 = 0; //flags and flag1 must be global variable, bcoz if it is local then every time in new call stack the variables are created and initialized to zero, so the value set to 1 (if condition matches in last function) becomes useless and doesnot stop or return the function.
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
    rearenque(q, 10);
    rearenque(q, 20);
    // rearenque(q, 30);
    // rearenque(q, 40);
    //rearenque(q, 50);
    frontenque(q, 0);
    frontenque(q, -10);
    frontenque(q, -20);
    frontenque(q, -30);
    /*reardeque(q);
    frontenque(q, -10);
    frontenque(q, -20);
    reardeque(q);
    frontenque(q, -20);
    frontdeque(q);
    frontdeque(q);
    frontdeque(q);*/

    for (int i = 0; i <= 5; i++)
        printf("The element at index %d is %d\n", i, q->quearr[i]);
    printf("the front index = %d\n", q->f);
    printf("the rear index = %d\n", q->r);

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
    for (int i = 0; i <= 5; i++)
        printf("The element at index %d is %d\n", i, q->quearr[i]);
    printf("the front index = %d\n", q->f);
    printf("the rear index = %d\n", q->r);
    char a[10] = "naba";
    printf("length : %d", strlen(a));
    return 0;
}
