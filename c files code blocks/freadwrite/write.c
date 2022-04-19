#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct car{
    int id;
    char name[25];
    char company[20];
    }b,a;
    printf("enter details for a\n");
    scanf("%d %[^\n]%*c %[^\n]%*c",&a.id,a.name,a.company);
    printf("enter details for b\n");
    scanf("%d %[^\n]%*c %[^\n]%*c",&b.id,b.name,b.company);
    FILE *p=fopen("car.txt","w");
    fwrite(&a,sizeof(a),2,p);
    fclose(p);
    return 0;
}
