#include <stdio.h>
#include <string.h>

struct rectangle
{
    struct coordinates
    {
        int x;
        int y;

    } upper_left,lower_right;
} r;

int area(struct rectangle rect)
{
    int l=rect.lower_right.x-rect.upper_left.x;
    int b=rect.upper_left.y-rect.lower_right.y;
    return l*b;
}

int main()
{

    printf("enter upper coordinates\n");
    scanf("%d %d",&(r.upper_left.x),&(r.upper_left.y));
    printf("enter lower coordinates\n");
    scanf("%d %d",&(r.lower_right.x),&(r.lower_right.y));
    printf("%d",area(r));

}

