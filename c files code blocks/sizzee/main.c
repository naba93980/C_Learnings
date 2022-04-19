#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int main()
{   char z[17];
char *q=&z;
void *f=z;
    char *a="Hello world!\n";
    int x= sizeof z;
    printf("%d %p %p",x,q,f);
    return 0;
}
