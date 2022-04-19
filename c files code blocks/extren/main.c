#include <stdio.h>
#include <stdlib.h>
extern  a;//here also gets implicitly declared to integer.
 v=76;//since its a global variable so it is taken as implicit declaration
 //and a variable declared without any explicit type name is treated as an integer
//it wont work inside main bcoz inside main it will be treated as assignment
 a=80;int h=6;
 extern int n;
extern int n;
extern int n;
int n=7;
int main()
{   extern int h;
    extern int h;
    extern int h;
    int d=5;
    register int n=6;

    printf("%d",v);
    return 0;
}
