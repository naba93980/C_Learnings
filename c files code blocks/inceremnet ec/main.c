#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2,b;
    b=--a + ++a+a-- + --a + a++ + --a;
    printf("%d",b);
    return 0;
}
