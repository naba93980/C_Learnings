#include <stdio.h>
#include <stdlib.h>
union tag{
int a;
char b;
double c;
}var;

int main()
{   var.a=128;
    char c=-128;
    printf("size of tag is %d\n",sizeof(union tag));
    printf("%d...%c...%c",var.a,var.b,c);
    return 0;
}
