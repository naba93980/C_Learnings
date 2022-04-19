#include<stdio.h>
#define x 5 //define i.e allocate memory to the constant x and initialize it with constant value(5 here)/constant expression. 
#define add(c,d) (c+d)
#define greater(a,b)  if(a>b) printf("%d is greater than %d",a,b);\
                      if(a<b) printf("%d is greater than %d",b,a);
int main()
{printf("%d\n",5*add(3,4));
printf("%d\n",x+5);
printf("%d\n",x+6);
printf("%d\n",x+7);
printf("%s\n",__DATE__);
printf("%s\n",__TIME__);
greater(5,6);
}
/*When we use define for a constant(macro), the preprocessor produces a C program where the 
defined constant is searched and matching tokens are replaced with the given expression.*/
