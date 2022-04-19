#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[][2]={{1,2},{3,4}};
     printf("%c\n",a[0][0]);
       printf("%c\n",**a);
    printf("%d\n",a[0]);
    printf("%d...............\n",a);
     printf("%d...............\n",&a);
      printf("%d...............\n",&a+1);
     printf("%d\n",a+1);
     printf("%s\n",a);
     printf("%s\n",a+1);
      printf("%s\n",*a);
     printf("%d\n",*a);
      printf("%d\n",*(a+1));
     printf("%s\n",*(a+1)+1);
     printf("%d\n",*(a+1)+1);
printf("%d\n",a[1]);
      printf("%d\n",*(a+1));
    return 0;
}
