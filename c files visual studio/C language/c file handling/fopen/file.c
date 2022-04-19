#include <stdio.h>
int main()
{
    FILE *p = NULL;
    char a[50]="\nnabajyoti modak";
    p = fopen("name.txt", "a");
    fprintf(p, "%s", a);
   
    return 0;
}