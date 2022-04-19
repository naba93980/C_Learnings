#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char a[8]="hello";
    char *str1;

    str1=a;
    char *str2="world";
    printf("%s",strncat(str1,str2,sizeof(a)-strlen(str1)));
    return 0;
}
