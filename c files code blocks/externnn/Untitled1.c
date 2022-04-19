extern int a=45;       //extern declared at file scope means the definition of the declared variable can be accesssed from the other file and be equally used by all functions present in the current file.
int c=6;
int func()    //extern declared inside a function of the current file means only that function can use the definition of the
{             //declared variable  from the other file. other functions of the same file cant
    int a=9;  //use the variable declared inside the only function and defined in the other file.
    return a;//9
}

int fun()
{
    extern int a;//go outside this function and get the definition. also needed if already declared at the file scope.
    a++;
    return a;//4
}

int fun2()
{
    return a;//4

}
//a function prototype is visible everywhere in the program,
//so no need to explicitly use , extern gets implicitly called by the compiler.
