#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int date;
    char* month;
    int year;
}DOB;

int main()

{   DOB Name[5];
    Name[0].date=28;
    Name[0].month="january";
    Name[0].year=2000;
    Name[1].date=15;
    Name[1].month="april";
    Name[1].year=1999;
    printf("my dob %d %s %d\n",Name[0].date,Name[0].month,Name[0].year);
    printf("his dob %d %s %d",Name[1].date,Name[1].month,Name[1].year);

    return 0;
}
