#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{
    char x='c';
    char *p;
    p=&x;
    printf("size of pointer = %d \n",sizeof(p));
    printf("address of x= %p \n",&x);
    printf("value of p = %p \n",p);
    printf("the value at x = %c \n",*p);
}
