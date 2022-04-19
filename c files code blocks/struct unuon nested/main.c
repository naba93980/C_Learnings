#include <stdio.h>
#include <stdlib.h>
struct
{
    float price;
    union
    {
        struct
        {

            long long number;
            char* colour;
            char* user;
        } book;
        struct
        {
            int wheel;
            int seater;
            char* name;
        } car;
    } item;
} user;

int main()
{
    user.item.book.number=5;
    printf("%d \n",sizeof(user.item));
    printf("%d ",user.item.car.wheel=7);
    printf("%d ",user.item.book.number);//answer 7 bcoz in union user.item.car.wheel=7 replaced the value of user.item.book.number=5.
}
