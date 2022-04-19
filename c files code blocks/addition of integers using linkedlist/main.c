#include <stdio.h>
#include <stdlib.h>
struct node
{
    int x;
    struct node *link;
};
struct node *insertnode(int digit, struct node *ptr, struct node **head)
{
    if (ptr == NULL)
    {
        ptr = malloc(sizeof(struct node));
        ptr->x = digit;
        ptr->link = NULL;
        *head = ptr;
        return ptr;
    }
    else
    {
        ptr->link = malloc(sizeof(struct node));
        ptr->link->x = digit;
        ptr->link->link = NULL;
        ptr = ptr->link;
        return ptr;
    }
}
struct node *createlist(int n, struct node *head)
{
    struct node *ptr = NULL;
    while (n != 0)
    {
        int rem = n % 10;
        n = n / 10;
        ptr = insertnode(rem, ptr, &head);
    }
    return head;
}
struct node *addnos(struct node *head1, struct node *head2)
{
    struct node *ptr1 = head1, *ptr2 = head2, *ptr3 = NULL, *head3;
    int sum, rem, carry = 0;
    while (ptr1 != NULL || ptr2 != NULL)
    {
        sum = 0;
        if (ptr1 == NULL)
        {
            sum = ptr2->x;
        }
        else
        {
            if (ptr2 == NULL)
            {
                sum = ptr1->x;
            }
            else
            {
                sum = ptr1->x + ptr2->x;
            }
        }
        sum = sum + carry;
        carry = sum / 10;
        rem = sum % 10;
        ptr3 = insertnode(rem, ptr3, &head3);
        if (ptr1 != NULL)
            ptr1 = ptr1->link;
        if (ptr2 != NULL)
            ptr2 = ptr2->link;
    }
    if (carry != 0)
    {
        ptr3 = insertnode(carry, ptr3, &head3);
    }
    return head3;
}
struct node *rev(struct node *head)
{
    struct node *prev = NULL, *next = head;
    while (next->link != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head->link = prev;
    return head;
}
void print(struct node *head1)
{
    struct node *ptr = head1;
    while (ptr->link != NULL)
    {
        printf("%d -> ", ptr->x);
        ptr = ptr->link;
    }
    printf("%d ", ptr->x);
    printf("\n");
}
int main()
{
    int a = 567, b = 789;
    struct node *head1 = NULL, *head2 = NULL, *head3 = NULL;
    head1 = createlist(a, head1);
    print(head1);
    head2 = createlist(b, head1);
    print(head2);
    head3 = addnos(head1, head2);
    print(head3);
    head3 = rev(head3);
    print(head3);
    return 0;
}
