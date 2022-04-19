#include <stdio.h>
#include <stdlib.h>
struct tt{
int salary;
int age;
}emp1, emp2;

int manager()
{
  struct tt manager1;
   return manager1.salary=20;
}
int main()
{   emp1.age=20;
    emp2.age=22;
    printf("%d    %d    %d",emp1.age,emp2.age,manager());
    return 0;
}
