#include <stdio.h>
#include <stdlib.h>

int main()
{   void *p=NULL;
    printf("%zu\n",sizeof(NULL)); //getting casted as void*, so 8 bytes since now a pointer
    printf("%zu\n",sizeof((int)NULL));//getting casted as an integer, so 4 bytes
    printf("%zu",sizeof(p));//p is void pointer & is just like any other pointer when it comes to 
    return 0;                //size, so 8 bytes
}

