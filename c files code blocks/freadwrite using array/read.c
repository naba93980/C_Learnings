
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct car{
    int id;
    char name[20];
    char com[20];
    };
    struct car a[2];                //when fgets is used for input string from keyboard then it also stores the "\n" character in the array unlike in %[^\n]%*c where "\n" is rejected.

    FILE *p=fopen("car.txt","r");
    fread(a,sizeof(a[0]),2,p);
    printf("id = %d\nc = %scomapany = %s\n",a[0].id,a[0].name,a[0].com);
    printf("id = %d\nc = %scompany = %s", a[1].id, a[1].name, a[1].com);
    fclose(p);


}
