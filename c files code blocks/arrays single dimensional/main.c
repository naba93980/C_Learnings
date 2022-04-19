#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int mymarks[]={21,20,27};
    for(int i=0;i<3;i++)
        sum=sum+mymarks[i];
    printf("marks =%d",sum);
    mymarks[1]=37;
    for(int i=0;i<3;i++)
        sum=sum+mymarks[i];
    printf("marks =%d",sum);
    return 0;

}
