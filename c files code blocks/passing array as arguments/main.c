#include<stdio.h>
#include<limits.h>
int array(int x[],int size)
{
    int sum=0;
printf("%d \n",sizeof(x));
    for(int i=0;i<size;i++)
        {sum=sum+x[i];

        }
    x[0]=100;
    return sum;
}

int main()
{
    int myarray[]={10,20,30,40,50,59};

    int total=array(myarray,6);
    printf("%d \n",total);
    printf("%d \n",sizeof(myarray));
    printf("%d",myarray[0]);
    return 0;
}

