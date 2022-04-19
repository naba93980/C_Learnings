#include <stdio.h>
#include <stdlib.h>
int a;
int fun1()
{
    a=5;
}
int fun2()
{
    a=a+5;
}
int main()
{   printf("%d\n",a);
    fun1();
    printf("%d\n",a);
    fun2();
    printf("%d",a);
    return 0;
}
