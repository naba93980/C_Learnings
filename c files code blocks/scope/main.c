#include <stdio.h>
#include <stdlib.h>
int global=10;
void myfunction()

{
    int global=15;
    printf("global+50=%d",global+50);
}

int main()
{
    int global=20;

    printf("%d \n",global);
    myfunction();


    return 0;
}
