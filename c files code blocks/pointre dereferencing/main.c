#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1025;
    int*p=&a;
    printf("%d,%d\n",p,*p);
    char*z;
    z=(char*)(&a);//not necessary to use type casting happens without (char*) also
    printf("%d,%d,%d,%d",z,*z,z+1,*(z+1));


    return 0;
}
