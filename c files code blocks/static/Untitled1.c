 int x=2;//no storage specifier so its a global variable accessible to all functions through out all the files
extern int k;
int func1()
{
int y=x+2;
return y;
}
int func2()
{
    int y=x+4;
    return y;
}
int func3()
{
    int y=k+4;
    return y;
}

