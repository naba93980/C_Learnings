#include <stdio.h>
#include <stdlib.h>
struct node
{
    int x;
    struct node *p;
}var1, var2;

int main()
{   var1.x=5;
    var1.p=&var2;
    var2.x=10;
    var2.p=NULL;
    printf("%d, %d",var1.x,var1.p->x);
    return 0;
}
