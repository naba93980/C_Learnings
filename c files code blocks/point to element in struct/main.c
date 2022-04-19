#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int x;
    int y;
}variable;
int main()
{
    variable a;
    a.x=5;
    a.y=6;
    variable *p=&a;
    printf("%d...%d",(*p).x,p->y);//p->y = (*p).y = (*&a).y = a.y
    return 0;
}
