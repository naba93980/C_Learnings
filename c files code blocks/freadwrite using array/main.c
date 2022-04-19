#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct car{
    int id;
    char name[20];
    char com[20];
    };
    struct car a[2];
    printf("enter a[1]");
    scanf("%d ",&a[0].id);
    fgets(a[0].name,20,stdin);
    fgets(a[0].com,20,stdin);
    printf("enter a[2]");
    scanf("%d ",&a[1].id);
    fgets(a[1].name,20,stdin);
    fgets(a[1].com,20,stdin);
    FILE *p=fopen("car.txt","w");
    fwrite(a,sizeof(a[0]),2,p);
    fclose(p);


}
