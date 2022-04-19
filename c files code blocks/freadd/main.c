#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct id{
        int roll;
        char name[25],city[25];
    }a,b,c;

    /*printf("enter ur details a\n");
    scanf("%d %[^\n]%*c %[^\n]%*c", &a.roll, a.name, a.city);
    printf("enter ur details b\n");
    scanf("%d %[^\n]%*c %[^\n]%*c", &b.roll, b.name, b.city);
    printf("enter ur details c\n");
    scanf("%d %[^\n]%*c %[^\n]%*c", &c.roll, c.name, c.city);
    FILE *p = fopen("id.txt", "w");
    if(p==NULL)
    printf("GONDOGOL HAI BHAI");
    fwrite(&a,sizeof(a),3,p);
    fclose(p);*/
    FILE *p = fopen("id.txt", "rb");
    printf("%zu\n",fread(&a,sizeof(a),3,p));
    printf("roll = %d\nname = %s\ncity = %s\n",a.roll,a.name, a.city);
    printf("roll = %d\nname = %s\ncity = %s\n", b.roll, b.name, b.city);
    printf("roll = %d\nname = %s\ncity = %s", c.roll, c.name, c.city);

    return 0;
}
