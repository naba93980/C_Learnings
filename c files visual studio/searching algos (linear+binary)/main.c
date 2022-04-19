#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int data;
    scanf("%d", &data);
    int l = 0, r = 4, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == data)
        {
            printf("found at: %d", mid);
            return 0;
        }
        else
        {
            if (data < a[mid])
                r = mid - 1;
            else
            {
                if (data > a[mid])
                    l = mid + 1;
            }
        }
    }
    printf("not found");
    return 0;
}