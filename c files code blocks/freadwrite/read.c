
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct car{
    int id;
    char name[25];
    char company[20];
    }b,a;

    FILE *p=fopen("car.txt","r");
    fread(&a,sizeof(a),2,p);
    printf("id = %d\nc = %s\ncomapany = %s\n",a.id,a.name,a.company);
    printf("id = %d\nc = %s\ncompany = %s", b.id, b.name, b.company);

    fclose(p);
    return 0;
}
