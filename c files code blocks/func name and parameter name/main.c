#include <stdio.h>
#include <stdlib.h>

int add(int x,int y)
{
    int add=x+y; //there can be a variable with same name as that of a fucntion inside the function.

    return add;
}

int main()
{
    int sum=add(10,10);
    printf("%d",sum);
    return 0;
}
