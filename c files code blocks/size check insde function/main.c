
#include<stdio.h>
#include<limits.h>
void array(int x[],int size)
{   printf("%d \n",sizeof(x));
    for(int z=0;z<size;z++)
  {
    printf("%d",x[z]);
  }
    return;
}

int main()
{
    int myarray[]={10,20,30,40,50,59};
     printf("%d \n",sizeof(myarray));
    array(myarray+1,5);

    return 0;
}

