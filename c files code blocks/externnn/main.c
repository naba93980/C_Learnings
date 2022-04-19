#include <stdio.h> //extern can be used and initialized to a variable only if it is a global variable , file scope variable(both with external or internal linkages.)
#include <stdlib.h>
extern int func();
extern int a;//here both extern and initialization are possible bcoz it is in file scope..initializing merely overrides the extern specifier.
extern int fun();//even if we dont declare this function with extern explicitly it doesnt matter bcoz the compiler implicitly declares it.
extern int fun2();
extern  int c;
int fu()
{
    a++;
    return a;//2    extern mane variable ba function da kunukhane defined
}            //     ase baire(scope er ba current file er baire), ami just declare koira disi,
int fu2()    //     ebar tumi oikhan thika ida access koro, koira eikhane file er variable ba function(jeda define korba) e use koro.
{
    a++;
    return a;//3
}
int main()
{

    printf("%d,",fu());//2
    printf("%d,",fu2());//3
    printf("%d,",fun());//4
    printf("%d,",a);//4
    printf("%d,",func());//9
    printf("%d,",fun2());//4
    printf("%d,",c);
    return 0;
}
