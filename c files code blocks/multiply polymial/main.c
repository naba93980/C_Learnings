#include <stdio.h>
#include <stdlib.h>
struct node
{
    float coef;
    int expo;
    struct node *link;
};
struct node *addnode(struct node *head)
{
    head = malloc(sizeof(struct node));
    printf("Enter coef : ");
    scanf("%f", &(head->coef));
    printf("Enter expo : ");
    scanf("%d", &(head->expo));
    head->link = NULL;
    return head;
}
struct node *insertnode(struct node *head, float coef_val, int expo_val)
{
    struct node *temp = malloc(sizeof(struct node)), *ptr;
    int flag = 0;
    temp->coef = coef_val;
    temp->expo = expo_val;
    if (head == NULL)
    {
        head = temp;
        head->link = NULL;
        return head;
    }
    if (temp->expo == head->expo)
    {
        head->coef = (head->coef) + (temp->coef);
        free(temp);
        //return head;
    }
    else
    {
        if (temp->expo > head->expo)
        {
            temp->link = head;
            head = temp;
        }

        else
        {
            ptr = head;
            while (ptr->link != NULL)
            {
                if (temp->expo == ptr->link->expo)
                {
                    ptr->link->coef = (ptr->link->coef) + (temp->coef);
                    free(temp);
                    flag = 1;
                    break;
                }
                if (temp->expo > ptr->link->expo)
                {
                    temp->link = ptr->link;
                    ptr->link = temp;
                    flag = 1;
                    break;
                }
                ptr = ptr->link;
            }

            if (flag == 0)
            {
                ptr->link = temp;
                temp->link = NULL;
            }
        }
    }
    return head;
}
struct node *createpolynomial(struct node *head, int n)
{
    struct node *ptr;
    head = addnode(head);
    int expo_val;
    float coef_val;
    for (int i = 1; i < n; i++)
    {
        printf("Enter coef : ");
        scanf("%f", &coef_val);
        printf("Enter expo : ");
        scanf("%d", &expo_val);
        head = insertnode(head, coef_val, expo_val);
    }
    return head;
}
struct node *addpoly(struct node *head1, struct node *head2)
{
    struct node *ptr1 = head1, *ptr2 = head2, *head3 = NULL;

    while (ptr1 != NULL || ptr2 != NULL)
    {
        if (ptr1 == NULL || ptr2 == NULL)
        {
            if (ptr1 == NULL && ptr2 != NULL)
            {
                head3 = insertnode(head3, ptr2->coef, ptr2->expo);
                ptr2 = ptr2->link;
            }
            if (ptr2 == NULL && ptr1 != NULL)
            {
                head3 = insertnode(head3, ptr1->coef, ptr1->expo);
                ptr1 = ptr1->link;
            }
        }
        else
        {
            if (ptr1->expo == ptr2->expo)
            {
                head3 = insertnode(head3, (ptr1->coef + ptr2->coef), ptr1->expo);
            }
            else
            {
                head3 = insertnode(head3, ptr1->coef, ptr1->expo);
                head3 = insertnode(head3, ptr2->coef, ptr2->expo);
            }
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
    }
    return head3;
}
struct node *mul(struct node *head1, struct node *head2)
{
    struct node *ptr1 = head1, *ptr2 = head2, *head4 = NULL;
    while (ptr1 != NULL)
    {
        while (ptr2 != NULL)
        {
            head4 = insertnode(head4, ((ptr1->coef) * (ptr2->coef)), ((ptr1->expo) + (ptr2->expo)));
            ptr2 = ptr2->link;
        }
        ptr1 = ptr1->link;
        ptr2 = head2;
    }
    return head4;
}
struct node *result(struct node *head1, struct node *head2)
{
    struct node *head3 = addpoly(head1, head2);
    return head3;
}
void print(struct node *head)
{
    struct node *ptr = head;
    while (ptr->link != NULL)
    {
        printf("(%.1fx^%d) + ", ptr->coef, ptr->expo);
        ptr = ptr->link;
    }
    printf("(%.1fx^%d)  ", ptr->coef, ptr->expo);
    printf("\n");
}

int main()
{
    int n;
    struct node *head1, *head2, *head3 = NULL, *head4 = NULL;
    printf("Enter the number of terms for polynomial 1 : ");
    scanf("%d", &n);
    head1 = createpolynomial(head1, n);
    print(head1);
    printf("Enter the number of terms for polynomial 2 : ");
    scanf("%d", &n);
    head2 = createpolynomial(head2, n);
    print(head2);
    head3 = result(head1, head2);
    print(head3);
    head4 = mul(head1, head2);
    print(head4);
    return 0;
}
