#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node
{
    int x;
    struct node *next;
    struct node *prev;
};
struct node *addnode(struct node *head)
{
    int data;
    printf("Enter data : ");
    scanf("%d", &data);
    head = malloc(sizeof(struct node));
    head->prev = head;
    head->x = data;
    head->next = head;
    return head;
}
struct node *addbeg(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter data you want to add at the beggining : ");
    scanf("%d", &data);
    temp->x = data;
    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
    head = temp;
    return head;
};
struct node *addend(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter data you want to add at the end : ");
    scanf("%d", &data);
    temp->x = data;
    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
    return head;
};
struct node *addpos(struct node *head)
{
    int pos;
    printf("Enter the position : ");
    scanf("%d", &pos);
    if (pos == 1 || pos == 7)
        return addbeg(head);
    if (pos == 6)
        return addend(head);
    int value;
    struct node *ptr = head, *temp = malloc(sizeof(struct node));
    printf("Enter the value at position %d : ", pos);
    scanf("%d", &value);
    temp->x = value;
    while (pos - 1 > 1)
    {
        ptr = ptr->next;
        pos--;
    }
    temp->next = ptr->next;
    temp->prev = ptr;
    ptr->next->prev = temp;
    ptr->next = temp;
    return head;
}
struct node *delbeg(struct node *head)
{
    printf("After deleting first element : \n");
    struct node *temp = head;
    head->prev->next = head->next;
    head->next->prev = head->prev;
    head = head->next;
    free(temp);
    return head;
}
struct node *delend(struct node *head)
{
    printf("After deleting last element : \n");
    struct node *temp = head->prev;
    head->prev->prev->next = head;
    head->prev = head->prev->prev;
    free(temp);
    return head;
}
struct node *delpos(struct node *head)
{
    struct node *ptr = head;
    int pos;
    printf("Enter position you wanna delete : ");
    scanf("%d", &pos);
    if (pos == (1))
    {
        return delbeg(head);
    }
    if (pos > 5)
    {
        return delend(head);
    }
    struct node *temp;
    while (pos - 1 > 1)
    {
        ptr = ptr->next;
        pos--;
    }
    ptr->next->next->prev = ptr;
    temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);
    return head;
}
void print(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next != head)
    {
        printf("%d ", ptr->x);
        ptr = ptr->next;
    }
    printf("%d", ptr->x);
    printf("\n");
}
void print_rev(struct node *head)
{
    struct node *ptr2 = head->prev;
    while (ptr2->prev != head->prev)
    {
        printf("%d ", ptr2->x);
        ptr2 = ptr2->prev;
    }
    printf("%d", ptr2->x);
    printf("\n");
}
int main()
{
    struct node *head = NULL;
    head = addnode(head);
    head = addbeg(head);
    head = addbeg(head);
    print(head);
    head = addend(head);
    head = addend(head);
    print(head);
    head = addpos(head);
    print(head);
    head = addpos(head);
    print(head);
    head = addpos(head);
    print(head);
    head = delbeg(head);
    print(head);
    head = delend(head);
    print(head);
    head = delpos(head);
    print(head);
    print_rev(head);
    return 0;
}
