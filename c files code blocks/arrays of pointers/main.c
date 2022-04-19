#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var[3]={10,20,30};
    int *pointer[3];
    for (int i=0;i<3;i++)
    {
        pointer[i]=&var[i];
    }
    for (int j=0;j<3;j++)
    {
        printf("value of var[%d] = %d \n",j,*pointer[j]);
    }
}
