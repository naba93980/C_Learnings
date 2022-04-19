//level_order_search_using_iterator(queue)
#include <queue>
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnewnode(int data)
{
    struct node *r = (struct node *)malloc(sizeof(struct node));
    r->data = data;
    r->left = NULL;
    r->right = NULL;
    return r;
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
void postordertraverse(struct node *p)
{
    if (p == NULL)
        return;
    postordertraverse(p->left);
    postordertraverse(p->right);
    printf("%d ", p->data);
    return;
}
void inordertraverse(struct node *p)
{
    if (p == NULL)
        return;
    inordertraverse(p->left);
    printf("%d ", p->data);
    inordertraverse(p->right);
    return;
}
int main()
{
    struct node *proot, *p1, *p2, *p3, *p4;
    proot = createnewnode(5);
    p1 = createnewnode(10);
    p2 = createnewnode(15);
    p3 = createnewnode(20);
    p4 = createnewnode(25);
    //       5
    //      / \
    //     10 15
    //    / \
    //   20  25

    proot->left = p1;
    proot->right = p2;
    p1->left = p3;
    p1->right = p4;

    inordertraverse(proot);
    printf("\n");
    preordertraverse(proot);
    printf("\n");
    postordertraverse(proot);
    printf("\n");

    return 0;
}