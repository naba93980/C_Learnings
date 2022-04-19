#include <stdio.h>
#include <stdlib.h>
int x=6;  //no storage class specifier but behaves like variable with static storage duration when it comes to memory and can have external linkage
void inc1()
 {
   for(int i=0; i<15; i++)
    {
     printf("%d,",x);
     x++;
    }
 }
 void inc2()
 {
    for(int i=5; i>0; i--)
    {
    printf("%d,",x);
    x--;
    }
 }
int main()
{

    inc1();
    printf("\n");


     for(int i=0; i<15; i++)
    {
     printf("%d,",x);
     x++;
    }printf("\n");


     inc2();
     printf("\n");


    for(int i=5; i>0; i--)
    {static int x=6;
    printf("%d,",x);
    x--;
    }

   printf("\n%d",x);
}
