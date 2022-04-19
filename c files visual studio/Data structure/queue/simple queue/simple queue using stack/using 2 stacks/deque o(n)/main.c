#include <stdio.h>
#include <stdlib.h>
int count = 0;
struct stack
{
    int size;
    int *arr;
    int top;
} * s1, *s2;
int isfull()
{
    if ((count == s1->size))
        return 1;
    return 0;
}
int isempty(struct stack *x)
{
    if ((x->top == -1))
        return 1;
    return 0;
}
int push1(int x)
{
    count++;
    s1->arr[++(s1->top)] = x;
    return s1->arr[s1->top];
}
void push2(int x)
{
    s2->arr[++(s2->top)] = x;
    printf("Element pushed in stack 2 %d\n", s2->arr[(s2->top)]);
    return;
}
int pop1()
{
    return s1->arr[s1->top--];
}
void pop2()
{
    printf("element dequed from stack 2 : %d\n", s2->arr[s2->top--]);
    return;
}
void enque(int x)
{
    if (isfull())
    {
        printf("queue full\n");
        return;
    }
    printf("Enqueued in stack 1: %d\n", push1(x));
    return;
}
void deque()
{
    if ((isempty(s1)) && (isempty(s2)))
    {
        printf("queue empty\n");
        return;
    }
    else
    {
        if ((s1->top == 0) && (isempty(s2)))
            printf("element dequed from stack 1 : %d\n", pop1());
        else
        {
            if (isempty(s2))
            {
                while (s1->top != -1)
                {
                    push2(pop1());
                }
            }
            pop2();
        }
        count--;
    }
    return;
}
void traverse()
{
    if ((isempty(s1)) && (isempty(s2)))
    {
        printf("queue empty\n");
        return;
    }
    else
    {
        if ((isempty(s2)) && (!isempty(s1)))
        {
            int count = 0;
            while (count != s1->top)
            {
                printf("%d  ", s1->arr[count++]);
            }
            printf("\n");
        }
        else
        {
            if ((isempty(s1)) && (!isempty(s2)))
            {
                int count = s2->top;
                printf("Traverse : ");
                while (count != -1)
                {
                    printf("%d  ", s2->arr[count--]);
                }
                printf("\n");
            }
            else
            {
                int count = s2->top, countt = 0;
                printf("Traverse : ");
                while (count != -1)
                {
                    printf("%d  ", s2->arr[count--]);
                }
                while (countt != s1->top + 1)
                {
                    printf("%d  ", s1->arr[countt++]);
                }
                printf("\n");
            }
        }
        return;
    }
}
void front()
{
    if ((isempty(s1)) && (isempty(s2)))
    {
        printf("\nqueue empty\n");
        return;
    }
    else
    {
        if ((isempty(s2)) && (!isempty(s1)))
            printf("front %d\n", s1->arr[0]);
        else
            printf("front %d\n", s2->arr[s2->top]);
    }
    return;
}
void rear()
{
    if ((isempty(s1)) && (isempty(s2)))
    {
        printf("\nqueue empty\n");
        return;
    }
    else
    {
        if ((isempty(s2)) && (!isempty(s1)))
            printf("rear %d\n", s1->arr[s1->top]);
        else
        {
            if ((isempty(s1)) && (!isempty(s2)))
                printf("rear %d\n", s2->arr[0]);
            else
                printf("rear %d\n", s1->arr[s1->top]);
        }
    }
    return;
}
void peek()
{
    if ((isempty(s1)) && (isempty(s2)))
    {
        printf("\nqueue empty\n");
        return;
    }
    else
    {
        if ((isempty(s2)) && (!isempty(s1)))
            printf("peek %d\n", s1->arr[0]);
        else
            printf("peek %d\n", s2->arr[s2->top]);
    }
    return;
}

void reverse(int start, int end)
{
    if (start < 0 && end < 0)
        return;
    int temp;
    temp = s1->arr[start];
    s1->arr[start] = s2->arr[end];
    s2->arr[end] = temp;
    start--;
    end--;
    if (start == -1)
    {
        int startt;
        startt = 0, temp;
        for (int i = end; i >= 0; i--)
        {
            temp = s2->arr[end];
            s2->arr[end] = s2->arr[startt];
            s2->arr[startt] = temp;
            startt++;
            end--;
            if (startt >= end)
                break;
        }
    }
    else
    {
        if (end == -1)
        {
            int endd;
            endd = 0, temp;
            for (int i = start; i >= 0; i--)
            {
                temp = s1->arr[start];
                s1->arr[start] = s1->arr[endd];
                s1->arr[endd] = temp;
                endd++;
                start--;
                if (start <= endd)
                    break;
            }
        }
        else
            reverse(start, end);
    }
    return;
}
void rev()
{
    if ((isempty(s1)) && (isempty(s2)))
    {
        printf("queue empty\n");
        return;
    }
    if ((!isempty(s1)) && (!isempty(s2)))
    {
        reverse(s1->top, s2->top);
        return;
    }
    if ((!isempty(s1)) && (isempty(s2)))
    {
        int start = s1->top, end = 0, temp;
        for (int i = start; i <= end; i--)
        {
            temp = s1->arr[start];
            s1->arr[start] = s1->arr[end];
            s1->arr[end] = temp;
            start--;
            end++;
            if (start <= end)
                break;
        }
        return;
    }
    if ((isempty(s1)) && (!isempty(s2)))
    {
        int start = s2->top, end = 0, temp;
        for (int i = start; i <= end; i--)
        {
            temp = s2->arr[start];
            s2->arr[start] = s2->arr[end];
            s2->arr[end] = temp;
            start--;
            end++;
            if (start <= end)
                break;
        }
        return;
    }
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
    deque();
    enque(30);
    enque(40);
    enque(50);
    enque(60);
    enque(70);
    //enque(60);
    //enque(70);
    //deque();
    /*traverse();
    enque(60);
    enque(70);
    enque(80);
    enque(90);*/
    traverse();
    peek();
    front();
    rear();
    rev();
    traverse();
    peek();
    front();
    rear();

    return 0;
}