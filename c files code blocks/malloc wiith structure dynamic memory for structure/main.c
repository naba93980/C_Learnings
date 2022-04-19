#include<stdio.h>
#include<stdlib.h>
struct car{
int a;
char b;
};
int main()
{
 struct car* p=(struct car*)malloc(sizeof(struct car));
 scanf("%d ",&(p->a)); // give space after %d
 scanf(" %c",&(p->b));// or give space before %c
 printf("%d\n",p->a);
 printf("%c",p->b);
}
