#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void append1(int *org_arr_pointer, int append_val, int arr_count)
{
    int new_array[arr_count+1];
    memmove(new_array,org_arr_pointer,(sizeof(new_array[0])*arr_count));
    new_array[arr_count]=append_val;
    printf("The new array\n");
    for(int i=0;i<=arr_count;i++)
        printf("%d\n",new_array[i]);
}
