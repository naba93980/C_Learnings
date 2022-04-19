#include<stdio.h>
#include <stdlib.h>

int arraysumm(int *aray,int size)
{
    int sum=0;
    printf("%d \n",sizeof(aray));
    for(int i=0;i<4;i++)
    {
        sum=sum+aray[i];

        }
 aray[0]=56;
        return sum;
}
int main()
{


    int myarray[]={10,20,30,6};
    int total;
    arraysumm(myarray,4);

    printf("%d",myarray[0]);
}
