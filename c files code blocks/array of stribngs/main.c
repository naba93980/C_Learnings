#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *a="hello";
    printf("%s\n",++a);
    char *fruit[]={"2 apples","2 oranges","3 bananas"};
    printf("%c",*(fruit[1]+2));
    return 0;
}
