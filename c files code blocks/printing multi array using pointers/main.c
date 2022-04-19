#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int *p=&(a[0][0]);p<=&a[2][2];p++) //p<=&a[2][2] is same as p<&a[3][0]
        printf("%d",*p);
    return 0;
}
