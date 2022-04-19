#include <stdio.h>
#include <stdlib.h>
static int fun();

int var=10;
int main()
{   var++;
    int var=3;
    printf("%d ",var);
    fun();
    return 0;
}
int fun()
{
    printf("%d",var);
}
