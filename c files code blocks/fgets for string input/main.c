#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[5];
    printf("enter the expression\n");
    fgets(a, 5, stdin);
    for(int i=0; i<=4; i++)
    {
        printf("the element at %d : %d\n",i,a[i]);
    }
    printf("The entire string is : %s\n", a);
    if(a[3]==NULL)
        printf("thats null\n");
    printf("the length of input string=%d",strlen(a));

    return 0;
}
//always take string input using fgets(str,size,stdin)
//str is array to hold the inputted string.
//stdin means take input from keyboard.
//size is max characters that can be taken along with ending null,
//fgets will take input up to '\n' (newline) character, following that fgets will
//automatically add null character of its own, if array space does not exist then
//either '\n' or any other inputted character in the last array space will be removed
//and replaced with null character.
