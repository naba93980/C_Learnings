#include <stdio.h>
#include <stdlib.h>
#include <limits.h> //%zu should be used for size_t bcoz it is confusion weither the alias will be unsigned long (lu) or unsigned long long (ull) as it depends on the compiler.
#include <stdint.h>

int main()
{   int x=7;
    //in 32 bit compiler (in this code blocks compiler) size_t is alias of unsigned int(%u) or unsigned long int(%lu) and is of 4 bytes.
    //in 64 bit compiler (in command prompt compiler) size_t is alias of unsigned long long int(%llu) and is of 8 bytes.
    printf("the size of size_t %lu \n ",sizeof(size_t));
    printf("the size of x %lu \n",sizeof(x)); //|si|ze|of|x| is stored in 4 bytes since in 32 bit compiler sit is unsigned long int. so if %lld is used 8 bytes will be read and weird output will be there.
    //if %lld was used it will read 8 bytes instead of 4 bytes and will pick up garbage value & give a weird number as output.
    printf("%d\n",INT_MAX);
    printf("%lu",SIZE_MAX);
    return 0;
}
