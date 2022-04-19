#include <stdio.h>
#include <stdlib.h>
struct type{
int a; // --4B
char b; //--4B
int c; //--4B
double d; //--8B
}VAR;    //--4B....For variable alignment with the largest member type (double) present in the structure.
int main()
{
    printf("%d",sizeof(struct type));
    return 0;
}
