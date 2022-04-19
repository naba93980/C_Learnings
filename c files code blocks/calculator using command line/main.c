#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
        if(strcmp(argv[1],"add")==0)
            printf("%d",(atoi(argv[2]))+(atoi(argv[3])));  //atoi converts string to integer
        if(strcmp(argv[1],"sub")==0)
            printf("%d",(atoi(argv[2]))-(atoi(argv[3])));
        if(strcmp(argv[1],"mul")==0)
            printf("%d",(atoi(argv[2]))*(atoi(argv[3])));
        if(strcmp(argv[1],"div")==0)
            printf("%d",(atoi(argv[2]))/(atoi(argv[3])));

    return 0;
}
