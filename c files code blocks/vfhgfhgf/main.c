#include <stdio.h>
#include <stdlib.h>
extern int x;


int main()
{   x++;
    printf("%d",x);
    x=2;

    return 0;
}
int x=23;
