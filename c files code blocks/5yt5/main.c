#include <stdio.h>
#include <stdlib.h>
const int b=7;
int x;//if int x=0 then x is stored in bss & since initialized by us not by bss so if we try to reinitialize it in either bss or data segment then it will be treated as redefinition & show error
int x=9;//once initialized goes to data segment from the bss segment and all points to the same initialized variable (here initialized with 9).
int x;
x=8;//type defaults to int means redefinition in data segment(since initialized here) thus shows error.
int main()
{  const int b;
    static int x;
    printf("%d",x);
    return 0;
}
