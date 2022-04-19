#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3,b=3,c;
    c=++a||b++;
    printf("%d,%d,%d",c,a,b);
    return 0;
}
