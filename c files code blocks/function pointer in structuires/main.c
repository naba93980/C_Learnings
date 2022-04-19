#include <stdio.h>
#include <stdlib.h>
int numberplate(int number)
{
    if (number == 1)
    {
        return 1560;
    }
    else
        return 0;
}
struct car
{
    int (*np)(int); //c doesnot allow function inside structure but is does allow function pointers.
};
int main()
{
    struct car honda;
    honda.np = &numberplate;
    printf("%d", (*(honda.np))(1));
    return 0;
}