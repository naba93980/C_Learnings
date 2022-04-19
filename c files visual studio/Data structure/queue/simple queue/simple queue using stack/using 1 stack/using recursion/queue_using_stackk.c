#include <stdio.h>
int stack[10];
int top = -1;
void enque(int x)
{
   top++;
   stack[top] = x;
   printf("element enqueued %d\n", stack[top]);
   return;
}
int pop()
{
   return stack[top--];
}
void deque()
{

   int value = pop();
   if (top == 0)
   {
      printf("Element dequeued : %d\n", pop());
      enque(value);
      return;
   }
   deque();
   enque(value);
   return;
}
void traverse()
{
   printf("Traverse : ");
   int count = 0;
   while (count != top + 1)
      printf("%d  ", stack[count++]);
}
int main()
{

   enque(10);
   enque(20);
   enque(30);
   enque(40);
   deque();
   traverse();

   return 0;
}