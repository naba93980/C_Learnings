#include <stdio.h>
#include <stdlib.h>
int x=10;
int fun();

int main()
{   int x=3;
   {
       int x=6;
       printf("%d\n",x);//printf has access to outer x as well but
   }                    //it prefers local than the global
                        //vocal for local
   printf("%d\n",x);//this printf doesnt have access to inner x
  fun();
    return 0;
}
int fun()
{
    printf("%d",x);
}
