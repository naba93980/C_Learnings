// 2. Recursively create root thenn left nodes until u stop then create right nodes(like preorder dfs).

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(struct node *p)
{
    printf("do u want to create new node\n");
    int response;
    scanf("%d", &response);
    if (response == 1)
    {
        int data;
        printf("enter data \n");
        scanf("%d", &data);
        p = (struct node *)malloc(sizeof(struct node));
        p->data = data;
        p->left = createnode(p->left);
        p->right = createnode(p->right);
        return p;
    }
    else
    {
        return NULL;
    }
    return p;
};
void preordertraverse(struct node *p)
{
    if (p == NULL)
        return;
    printf("%d ", p->data);
    preordertraverse(p->left);
    preordertraverse(p->right);
    return;
}
int main()
{
    struct node *p = NULL;
    p = createnode(p);
    preordertraverse(p);
}