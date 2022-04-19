#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50]={"learningisfun"};
    char *first =str;
    char *sec=str;
    printf("before memmove\n\n\n%s\n\n\n%s\n\n",first,sec);
    memmove(sec+8,first,13);
    printf("after memmove \n\n%s\n\n",sec); //output should be : learninglearningisfun
    /*printf("before memmcpy\n\n%s\n\n%s\n\n",first,sec);
    memcpy(sec+8,first,13); //output should be : learninglearninglearn
    printf("after memcpy \n\n%s",str);*/
    return 0;
}
