//level_order_search_using_iterator(queue)
#include <queue>
#include <iostream>
#include <cstdio>
#include <cstdio>
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
bool preordersearch(struct node *p, int data)
{
    if (p == NULL)
        return false;
    if (p->data == data)
    {
        return true;
    }
    if (preordersearch(p->left, data))
    {
        return true;
    }
    else
    {
        if (preordersearch(p->right, data))
            return true;
        else
            return false;
    }
}
bool postordersearch(struct node *p, int data)
{
    if (p == NULL)
        return false;
    if (postordersearch(p->left, data))
    {
        return true;
    }
    else
    {
        if (postordersearch(p->right, data))
            return true;
        else
        {
            if (p->data == data)
            {
                return true;
            }
            else
                return false;
        }
    }
}
bool inordersearch(struct node *p, int data)
{
    if (p == NULL)
        return false;
    if (inordersearch(p->left, data))
    {
        return true;
    }
    else
    {
        if (p->data == data)
        {
            return true;
        }
        else
        {
            if (inordersearch(p->right, data))
                return true;
            else
                return false;
        }
    }
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

    std::cout << inordersearch(proot, 257);
    printf("\n");
    std::cout << preordersearch(proot, 255);
    printf("\n");
    std::cout << postordersearch(proot, 25);
    printf("\n");

    return 0;
}