#include <stdio.h>
#include <stdlib.h>
int binarysearch(int *a, int l, int r, int x)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == x)
            return mid;
        if (x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            if (x > a[mid])
                l = mid + 1;
        }
    }
    return -1;
}
int linearsearch(int *a, int size, int data)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == data)
            return i;
    }
    return -1;
}
int main()
{
    int a[10] = {23, 31, 35, 46, 65, 76, 77, 82, 89, 97};
    int size = sizeof(a) / sizeof(a[0]);
    int data, l = 0, r = size - 1, pos;
    printf("Enter element to be searched :");
    scanf("%d", &data);
    if (pos = (linearsearch(a, size, data) + 1))
    {
        printf("found at position :%d ", pos);
        return 0;
    }
    printf("not found");
    return 0;
    /* if (pos = (binarysearch(a, l, r, data) + 1))
    {
        printf("found at position :%d ", pos);
        return 0;
    }
    printf("not found");
            return 0;*/
}