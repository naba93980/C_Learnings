//level order insert using bfs(queue/iterator)

#include <cstdio>
#include <cstdlib>
#include <queue>
#include <iostream>
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
struct node *insert(int data, std::queue<struct node *> &qu, struct node *root)
{
    if (root == NULL)
    {
        root = createnewnode(data);
        qu.push(root);
        return root;
    }
    else
    {
        struct node *cp = qu.front();
        if (cp->left == NULL)
        {

            cp->left = createnewnode(data);
            qu.push(cp->left);
            return root;
        }

        if (cp->right == NULL)
        {
            qu.pop();
            cp->right = createnewnode(data);
            qu.push(cp->right);
            return root;
        }
        return root;
    }
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
    int arr[] = {8, 6, 7, 12, 5, 1, 9, 4, 88};
    int size = sizeof(arr) / sizeof(int);
    struct node *root = NULL;
    std::queue<struct node *> q;
    // Loop to insert nodes in Binary Tree in level order
    for (int i = 0; i < size; i++)
        root = insert(arr[i], q, root);
    preordertraverse(root);
    std::cout << '\n';
    return 0;
}
