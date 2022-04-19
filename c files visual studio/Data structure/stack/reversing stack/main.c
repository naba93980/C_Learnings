#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
void print(struct stack *s)
{
    while(s->top!=-1)
        printf("%d\n",s->arr[s->top--]);
}
void push(struct stack*s, int val)
{
    if(s->top==s->size-1)
        printf("overflow\n");
    else
    {
        s->top++;
        s->arr[s->top]=val;
    }
}
int stackvalue(struct stack *s)
{
    int pos=s->size-s->top;
    int value=s->arr[s->top];
    if(s->top==0)
    {
        s->arr[pos-1]=value;
        return ++(s->top);
    }
    else
    {
        s->top--;
        s->top=stackvalue(s);
        s->arr[pos-1]=value;
        return ++(s->top);
    }


}
int reverse(struct stack*s)
{
    s->top=stackvalue(s);
    return --(s->top);
}

int main()
{
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=7;
    s->arr=(int*)malloc(28);
    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    push(s,50);
    push(s,60);
    push(s,70);
    printf("Before reversing : \n");
    print(s);
    s->top=s->size-1;
    printf("After reversing : \n");
    s->top= reverse(s);
   //
    print(s);
    return 0;
}
/* if we push 6 values in stack then  s->arr[0] will remain empty 
bcoz int pos will be 2 as s->top will be 5 so, value = s->arr[5] in the first 
call of stackvalue function, so in the else part s->arr[2-1]=s->arr[1]=value,
 and s->arr[0] is empty; */
