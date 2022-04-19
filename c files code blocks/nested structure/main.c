#include <stdio.h>
#include <stdlib.h>
struct item{
float price;
struct{
    int number;
    char* colour;
    char* user;
    }book,dress;
};

int main()
{
    struct item user_1,user_2;
    user_1.price=500;       user_2.price=5000;
    user_1.book.number=2;   user_2.dress.number=1;
    user_1.book.colour="white";   user_2.dress.colour="red";
    user_1.book.user="nabajyoti";  user_2.dress.user="ishan";
    printf("%d books of %s colour are being bought by %s at price of %f\n",user_1.book.number, user_1.book.colour,user_1.book.user,user_1.price);
    printf("%d dress of %s colour are being bought by %s at price of %f",user_2.dress.number, user_2.dress.colour,user_2.dress.user,user_2.price);
    return 0;
}
