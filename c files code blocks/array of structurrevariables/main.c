#include <stdio.h>
#include <stdlib.h>

typedef struct {
int roll;

int age;
}student;

int main()
{
    student guy[3];
    for(int i=0;i<3;i++)
    {
        printf("enter roll-");
        scanf("%d",&guy[i].roll);

        printf("enter age-");
        scanf("%d",&guy[i].age);

    }
    for(int i=0;i<3;i++)
    {

        printf("roll no is %d\n",guy[i].roll);

        printf("age is %d\n",guy[i].age);}
    return 0;
}
