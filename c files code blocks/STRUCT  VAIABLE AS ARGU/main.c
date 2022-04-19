#include <stdio.h>
#include <stdlib.h>
struct stud{
char name[50];
int roll;
}a={.name="nick",.roll=555};
void print(struct stud x)
{
    printf("%s\n%d",x.name,x.roll);
}

int main()
{
    print(a);
    return 0;
}
