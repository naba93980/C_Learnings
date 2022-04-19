#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char a[6]="hello";
    char b[3];
    strncpy(b,a,sizeof(b));
    b[sizeof(b)-1]='\0';
    printf("%s",b);

}

