//3. delete the entire binary tree using recursion/dfs (post order traversal)

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
void deletepostorder(struct node *p)
{
    if (p == NULL)
        return;
    deletepostorder(p->left);
    deletepostorder(p->right);
    free(p);
    cout << "freed " << p << "\n";
}
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
    preordertraverse(proot);
    cout << "\n";
    deletepostorder(proot);
    cout << "\n";
    preordertraverse(proot);

    return 0;
}