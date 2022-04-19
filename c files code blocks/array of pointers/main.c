#include <stdio.h> //fruits is pointer to first element of the pointer array
#include <stdlib.h>//*fruits is fruits[0] which is holding the address of first character of banana
//**fruits is the first character of banana

int main()
{
   char *fruits[3]={"banana","oranges","apples"};
printf("%d\t",fruits);printf("%d\t",*fruits);printf("%s\t",*fruits);printf("%c\n",**fruits);
printf("%d\t",fruits+1);printf("%d\t",*(fruits+1));printf("%s\t",*(fruits+1));printf("%c\n",**(fruits+1));
printf("%d\t",fruits+2);printf("%d\t",*(fruits+2));printf("%s\t",*(fruits+2));printf("%c\n",**(fruits+2));
printf("%d\n",&fruits);
printf("%d\n",&fruits+1);
printf("%d\n",&fruits+2);
printf("%d\t",fruits);printf("%d\t",fruits[0]);printf("%c\n",fruits[0][0]);
printf("%d\t",&fruits[0]);


        return 0;
}
