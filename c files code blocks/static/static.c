#include <stdio.h>
#include <stdlib.h>
extern int func1();
extern int func2();
extern int func3();
extern int x;
int k=3;/*file scope(with external linkage possible since static storage has not
been explicitly mentioned, though when it comes to memory it behaves like a static
storage duration variable... by default no storage specifier so its a global variable
accessible to all functions through out all the files*/
void fac()
{
    for(int i=0;i<5;i++)
        printf("%d ",k++);
}

int main()
{

    for(int i=0;i<5;i++)
    {
        printf("%d ",k++);
    }
    printf("\n");
    int z=x+1;
    printf("%d,%d,%d,%d",z,func1(),func2(),func3());
    printf("\n");
    fac();
    return 0;
}
