#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a="Hello";
    printf("%p \n%p",a+1,"hello"+1);

    return 0;
}
