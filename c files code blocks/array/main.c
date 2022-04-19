#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *fruits[10]={"2 apples","3 bananas","2loranges","2 pinneapples","gr"};

   printf("%c\n",(** fruits));
   printf("................%s\n",(*fruits));
    printf("................%d\n",(fruits[1]));
     printf("................%d\n",(&fruits));
    printf("..............%d\n",(fruits+1));
     printf("............%s\n",*(fruits));
    printf("..............%s\n",*(fruits+1));
     printf("..............%s\n",*(fruits+4));
    printf("%d\n",(*fruits)+1);

    printf("%c\n",(**(fruits+1)));
     printf("%d.....................\n",(fruits));
      printf("%d.....................\n",(fruits+1));
    printf("%d \n",(fruits[0]));
     printf("%c \n",*(fruits[0]));
    printf("%s\n",(&fruits[0][0]));
    printf("%d\n",( (fruits+1)));
     printf("%d \n",(fruits[1]));
   printf("%c \n",*(fruits[2]));
    printf("%c\n",*(fruits[2]+5));
    printf("%s\n",&(fruits[2][0]));
     printf("%s\n",&(fruits[2][3]));
      printf("%s\n",(fruits[2]));
       printf("%s\n",(fruits[2]+3));
        printf("%c\n",(fruits[2][0]));
         printf("%s 9\n",(++fruits[2]));
           printf("%s\n",(fruits[2]));
            printf("%s\n",--(fruits[2]));
             printf("%c\n",(fruits[2][0]));

}
