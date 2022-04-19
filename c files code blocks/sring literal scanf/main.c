#include <stdio.h>
#include <stdlib.h>
/*The scanf function prototype is: int scanf(const char *format, ...);
The function returns the total number of items successfully matched, which can be less than the number requested.
If the input stream is exhausted or reading from it otherwise fails before any items are matched, EOF is returned.*/
int main()
{
    int x,y;
    char a[10];
    printf("%d %s",scanf("%s",a),a);
    return 0;
}
