#include <stdio.h>
#include <stdlib.h>
void print(char *name)
{
    printf("%s\n", name);
    printf("whats up fraand?");
    return;
}
// p is pointer pointing to instructions of function of return type
//'void' and parameter type 'char*' stored in memory address.
int main()
{
    void (*p)(char *) = &print;
    (*p)("nabajyoti modak"); //entering that adress storing function instructions and passing the arguments using pointer.
    p("\nfine brodas");
    return 0;
}