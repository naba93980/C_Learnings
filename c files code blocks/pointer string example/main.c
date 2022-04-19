#include <stdio.h>
#include <stdlib.h>

void func(char *s1, char *s2)
{
    char *temp;
    temp=s1;
    s1=s2;

    s2=temp;
}
void func2(char **s1, char **s2)
{
    char *temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}
int main()
{
    char *str1="hello";
    char *str2="world";
    func(str1,str2);
    printf("%s %s\n",str1,str2);
    func2(&str1,&str2);
    printf("%s %s",str1,str2);

}
