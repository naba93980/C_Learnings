#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)
int main()
{
    struct id{
        int roll;
        char name[25],city[25];
    }a,b;
    printf("%d", sizeof(a));

    /*printf("enter ur details a\n");
    scanf("%d %[^\n]%*c %[^\n]%*c", &a.roll, a.name, a.city);
     printf("enter ur details b\n");
    scanf("%d %[^\n]%*c %[^\n]%*c", &b.roll, b.name, b.city);

    FILE *p = fopen("id.txt", "w");
    if(p==NULL)
    printf("GONDOGOL HAI BHAI");
    fwrite(&b,sizeof(a),2,p);
    fclose(p);*/
    struct id* k=&a;struct id* l=&b;
    printf("%d  %d\n",k,l);
    FILE *p = fopen("id.txt", "r");
    printf("%d",fread(&b,sizeof(a),2,p));

    printf("roll = %d\nname = %s\ncity = %s\n",a.roll,a.name, a.city);
    printf("roll = %d\nname = %s\ncity = %s\n",b.roll,b.name, b.city);

    return 0;
}
