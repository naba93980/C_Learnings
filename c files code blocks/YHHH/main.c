#include <stdio.h>

int main()
{
    printf("plz enter the age");
    int age;
    scanf("%d",&age);
    if (age>18)
    {
        if (age<21)
        {
            printf("the age is ok");
        }
        else
        {
            printf("the age is too high");
        }
    }
     else
     {
          if (age==18)
          {
             printf("the age is dot 18");
          }
          else
          {
              printf("the age is too low");
          }
     }


}
