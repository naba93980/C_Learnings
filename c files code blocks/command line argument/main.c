#include <stdio.h>                  //  argv is pointer to first element i.e pointer to 0 th element which itself is pointer to the first character of the string argument
#include <stdlib.h>                 //   |
                                    //  \|/
                                    //  |0| -- |_|_|_|_|_|\0|
                                    //  |1| -- |_|_|_|_|_|\0|
                                    //  |2| -- |_|_|_|_|_|_|_|\0|
                                    //  |3| -- |_|_|_|_|_|\0|

                                    //  char* argv[] can also be written as char** argv

int main(int argc, char* argv[])
{
    printf("%d \n",sizeof(argv));
    printf("the number of arguments is %d \n",argc);
    for(int i=0;i<=argc;i++)
    {
      printf("the argument at index %d is %s\n",i,argv[i]);
    }
}

