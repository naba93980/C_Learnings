//3. Create tree in level order (bfs) using iteration

#include <iostream>
#include <queue>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newnode(int data, struct node *nnode)
{
    nnode = (struct node *)malloc(sizeof(struct node));
    nnode->data = data;
    nnode->left = NULL;
    nnode->right = NULL;
    return nnode;
};
struct node *insert(struct node *p, int data, std::queue<struct node *> &qu)
{
    if (p == NULL)
    {
        p = newnode(data, p);
        qu.push(p);
        return p;
    }
    else
    {
        struct node *cp = qu.front();

        if (cp->left == NULL)
        {
            cp->left = newnode(data, cp->left);
            qu.push(cp->left);
            return p;
        }
        if (cp->right == NULL)
        {
            qu.pop();
            cp->right = newnode(data, cp->right);
            qu.push(cp->right);
            return p;
        }
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
    int arr[] = {8, 6, 7, 12, 5, 1, 9, 4};
    int size = sizeof(arr) / sizeof(int);
    struct node *root = NULL;
    std::queue<struct node *> q;
    // Loop to insert nodes in Binary Tree in level order
    for (int i = 0; i < size; i++)
        root = insert(root, arr[i], q);
    preordertraverse(root);
    std::cout << '\n';
    return 0;
}