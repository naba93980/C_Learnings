#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={1,2,3};

    printf("%d \n",(&arr));
    printf("%d \n",(arr));
    printf("%d \n",(*(&arr)));

     printf("%d \n",(*(&arr)+1));

    printf("%d",**(&arr));
    return 0;
}
