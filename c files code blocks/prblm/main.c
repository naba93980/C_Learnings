#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char a[]="hello";
   printf("%s \n",a);
   char b[]="scool";
   for(int i=0;i<6;i++)
   {*(&a[i])= *(&b[i]);}
     printf("%s \n",a);
      char c[]="oyeah";
     printf("%s",strncpy(a,c,4));
    return 0;
}
