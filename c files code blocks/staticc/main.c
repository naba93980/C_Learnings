#include <stdio.h>  //static allocation(allocation of memory at compile time) is what happens when we declare a static or global
#include <stdlib.h>  // variable.each static or global variable defines one block of space
                 //  of a fixed size.the space is allocated once when our program is started extern int fun()
                 // (part of exec operation) and is never freed.

 int b; //C allows a global variable to be 'declared and defined' again when
 int b; //first declaration and definition doesn't initialize the variable.

static int a=8;     //static is access specifier.i.e a cant  be accessed by another file.
static int a; //C allows a global variable to be 'declared and defined' again when
              //first declaration and definition doesn't initialize the variable.
extern int fun();//if we dont write this line i.e if we dont declare the function defined in other file in main file then it gets automatically implicitly declared in the main file. also it does matter 'extern' specifier is not necessary in case of function even when definition is in separate file.
extern int z;//if we dont declare this line i.e if we dont declare the variable defined in other file in the main file here then it doesn't get implicitly declard in the main file unlike the function and shows error. also after declaration it is not necessary to use extern specifier, just like in case of function compiler automatically connects.

int ass()
{
    int summ=5;
    return summ;
}
int main()
{
    extern int a;//we may or may not give this line doesnt matter.
    for(int *p=&a;p<(&a+5);p++)
    {  int a=88; //C doesn't allows a local variable to be 'declared and defined' again
        //even when first declaration and definition doesn't initialize the variable.

       int dum=a;
       printf("%d...",dum++);
    }
    printf("%d\n",fun());
 printf("%d\n",z);
return 0;
}
