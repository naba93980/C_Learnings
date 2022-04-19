#include <stdio.h>
#include <stdlib.h>
//cant write code outside function except global variable and function declarations

int main()
{      int x=x+1;//its ok.

    for(int i=0;i<5;i++)
    {  const int z=8;//z is a read only variable
       static int d=d+1;/*initialising element of static int variable must be a 'literal
       constant' ,it cant be 'const' qualified variable.
       that is the term here d+1 must be a constant. but d itself is a variable
       with specifier static, so d can assume variable value, so d+1 is not a constant,
       so the statment is incorrect*/
       //z=z+1 is illegal ...since const qualifier makes it read only variable.
       d=d+1;//legal since 'd' is a variable.
       printf("%d",d);
       d++;
    }
    return 0;
}
