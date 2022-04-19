#include <stdio.h>
#include <stdlib.h>
const int h;//stored in bss section.
static int a;//in C u can have as many declarations and tentative definitions as you want as long as they match each other bcoz all of them will merge to point to the same variable which is initialized only once.
static int a; //if initialized with 0 or not initialized then the variable gets stored in bss section.
static int a=6;////if initialized with any value other than 0 then the variable gets stored in data segment.
static int a; //can declare and define a global variable again after initialising,
//the variable will be same which was earlier declared, defined and initialised given not initialized again. if initialized again then error.

int main()
{   static int a;
     static int x; //stored in bss section.
   //static int x =0; also gets stored inside bss section
   static int j=7;//stored in data segment.
   int z;//stored in stack
    printf("%d",a);
    return 0;
}//any kind of global & static local variable which is not initialized is stored in bss section.
//any kind of global & static local variable which is initialized is stored in data segment.
//local variables which are non static are stored in stack.
