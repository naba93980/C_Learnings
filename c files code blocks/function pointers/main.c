#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) //function which is set of instruction gets stored in a memory address.
{
    return a + b;
}
int main()
//fun is function pointer which gets the adress of the memory where the function 'add' (set of instructions) is stored.
{
    int (*fun)(int, int) = &add;  //fun is a pointer pointing to adress storing 'add' function instructions of formal parameter type 'int , int' and return type 'int'.
    printf("%d\n", (*fun)(5, 3)); //enter to that address and pass 5 & 3 as actual parameters and get the result returned and print that in screen.
    printf("%d\n", (fun)(5, 3));  //same as above.

    return 0;
}