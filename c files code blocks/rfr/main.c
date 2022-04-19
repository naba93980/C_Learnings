#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]="hezlo";

    char *p;
    p=a;
    printf("%c \n",*p);
    printf("%c \n",*(p+1));
     printf("%p \n",&a[0]);
      printf("%p \n",&a);
       printf("%p \n",a);
  printf("%s \n",&a);
  printf("%s \n",&a[2]);
   printf("%s \n",p+1);
    printf("%s \n",p);
    printf("%c\n",p[0]);
    printf("%s\n",++p);
     printf("%s\n",p);
    printf("%c\n",p[0]);
    printf("%c\n",a[2]);
        printf("%c\n",p[2]);
        printf("%s\n",&p[0]);
        printf("%d\n",p[0]);




    return 0;
}
