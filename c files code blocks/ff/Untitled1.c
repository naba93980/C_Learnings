#include <string.h> //it(header files) has a file scope with internal linkage
int y=3;            //if we dont include the header file it implicitly gets declared.
int fun2()
{   int y=7;
    return y;
}
int fun()
{
    return (strcmp("123","223"));
}
