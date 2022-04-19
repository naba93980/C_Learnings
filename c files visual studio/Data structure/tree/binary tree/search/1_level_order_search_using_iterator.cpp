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
void bfsiteratortraverse(struct node *p, std::queue<struct node *> &qu, int data)
{
    if (p == NULL)
        return;
    else
    {
        if (p->data == data)
        {
            cout << "mil gaya ";
            return;
        }
        else
        {
            if (p->left != NULL)
                qu.push(p->left);
            if (p->right != NULL)
                qu.push(p->right);
            qu.pop();
            if (!qu.empty())
                bfsiteratortraverse(qu.front(), qu, data);
            else
                cout << "nahi mila ";
        }
        return;
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

    std::queue<struct node *> q;
    // if (q.empty())
    //     cout << "null";
    q.push(proot);
    bfsiteratortraverse(proot, q, 115);

    return 0;
}