#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char str1[]="abcd";
   char str2[]="abc";
   int x=strcmp(str1,str2);
   printf("%d",x);
    return 0;
}
