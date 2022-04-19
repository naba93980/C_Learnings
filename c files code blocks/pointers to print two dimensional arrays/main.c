#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[][2]={{1,2},{4,5}};
    for(int *p=&a[0][0];p<=&a[1][2];p++)
    printf("%d",*p);
    return 0;
}
