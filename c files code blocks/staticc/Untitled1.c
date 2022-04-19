extern int ass();//if we dont write this line i.e if we dont declare the function defined in main file in other file then it gets automatically implicitly declared in the other file.
extern int b;//if we dont declare this line i.e if we dont declare the variable defined in main file in the other file here then it doesn't get implicitly declarded in the other file unlike the function and shows error.

extern int z; //not necessary to use extern for linking the definition with other(main) file . compiler automatically links.
int z=78;
extern int fun()  //not necessary to use extern for linking the definition with other(main) file . compiler automatically links.
{
int k=ass();
int sum=b+k;
return sum;
}

