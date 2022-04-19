#include <stdio.h>
#include <stdlib.h>
struct stud{
char name[50];
int roll;
}a={.name="ndick",.roll=5};
void print(struct stud *p)
{
    printf("%s\n%d",p->name,p->roll);
}

int main()
{   printf("%s\n",a.name);
    print(&a);
    return 0;
}
