#include <stdio.h>
#include <stdlib.h>
register int y;  //register specifier not specified for global variable
int main()
{
    register int i = 10;
    int* a = &i;   //error: register variable is stored in cpu register, so it doesn't occupy any memory.
    printf("%d", a);

    return 0;
    }
