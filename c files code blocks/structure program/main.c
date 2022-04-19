#include <stdio.h>
#include <stdlib.h>

typedef struct vehicle
{
    int number_plate;
    float mileage;
    char* company_name;
    int seater;
} car;

int main()

{
    car ca;
    ca.seater=4;
    printf("%d\n",ca.seater);
    struct vehicle bolero= {4562,15.2,"tata",8};
    car creta= {9854,21.60,"hyundai",6};
    car range_rover= {4562,15.2,"tata",8};
    printf("%d, %f, %s, %d \n ",creta.number_plate,creta.mileage,creta.company_name,creta.seater);
    printf("%d, %f, %s, %d ",bolero.number_plate,bolero.mileage,bolero.company_name,bolero.seater);

    return 0;
}
