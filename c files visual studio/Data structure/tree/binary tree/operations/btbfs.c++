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
void bfstraversal(std::queue<struct node *> &q)
{
    struct node *p;
    if (q.empty())
        return;
    else
    {
        p = q.front();
        q.pop();
        std::cout << p->data << "  ";
    }
    if (p->left != NULL || p->right != NULL)
    {
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    bfstraversal(q);
    return;
}
void bfssearch(int data, std::queue<struct node *> q)
{
    struct node *p;
    if (q.empty())
    {
        std::cout << "not found";
        return;
    }
    else
    {
        p = q.front();
        q.pop();
        if (p->data == data)
        {
            std::cout << "found";
            return;
        }
    }

    if ((p->left != NULL) || (p->right != NULL))
    {
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return bfssearch(data, q);
}
void insert(int data, std::queue<struct node *> &qu, struct node *root)
{
    printf("root val = %d\n", root->data);
    if (root == NULL)
    {
        root = createnewnode(data);
        return;
    }
    else
    {
        if (root->left == NULL || root->right == NULL)
        {
            if (root->left == NULL)
            {
                root->left = createnewnode(data);
                return;
            }
            else
            {
                qu.push(root->left);
            }
            if (root->right == NULL)
            {
                root->right = createnewnode(data);
                return;
            }
            else
            {
                qu.push(root->right);
            }
        }
        else
        {
            qu.push(root->left);
            qu.push(root->right);
            struct node *p = qu.front();
            qu.pop();
            insert(data, qu, p);
            return;
        }
    }
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

    //LEVEL ORDER INSERTION

    std::queue<struct node *> qu;

    insert(30, qu, proot); //check first if at left or right if there is any null, if not only then put both the child node in queue.
    inordertraverse(proot);
    std::cout << "\n-----------------------------\n";
    while (!qu.empty())
    {
        qu.pop();
    }
    //         5
    //       /   \
    //      /     \
    //     10     15
    //    /  \    / \
    //   20  25  30 35

    insert(35, qu, proot);
    inordertraverse(proot);
    std::cout << "\n-----------------------------\n";

    while (!qu.empty())
    {
        qu.pop();
    }
    qu.push(proot);
    bfstraversal(qu);
    std::cout << "\n-----------------------------\n";

    while (!qu.empty())
    {
        qu.pop();
    }
    qu.push(proot);
    bfssearch(30, qu);

    std::cout << "\n------------END--------------\n";
    return 0;
}