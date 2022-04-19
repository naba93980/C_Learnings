#include <stdio.h>
#include <stdlib.h>
struct stud{
char name[50];
int roll;
}a={.name="ndick",.roll=5};
void print(char *p,int x)
{
    printf("%s\n%d",p,x);
}

int main()
{
    print(a.name,a.roll);
    return 0;
}
