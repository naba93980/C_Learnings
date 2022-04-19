#include <stdio.h>//it(header files) has a file scope with internal linkage
#include <stdlib.h>
extern int fun();
extern int y;
int x=2;
int main()
{
    printf("%d",y);
    return 0;
}
