#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void append2(int *org_arr_pointer, int append_val, int arr_count)
{
    org_arr_pointer[arr_count]=append_val;
    printf("The new array\n");
    for(int i=0;i<=arr_count;i++)
        printf("%d\n",org_arr_pointer[i]);
}
