//3. Delete the entire binary tree in bfs i.e level order (queue/iterator)

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
void bfsiteratordelete(std::queue<struct node *> &qu)
{
    if (qu.empty())
        return;
    else
    {
        if (qu.front()->left != NULL)
            qu.push(qu.front()->left);
        if (qu.front()->right != NULL)
            qu.push(qu.front()->right);
        free(qu.front());
        qu.pop();
        bfsiteratordelete(qu);
    }
}
void bfsiteratortraverse(std::queue<struct node *> &qu)
{
    if (qu.empty())
        return;
    else
    {
        cout << qu.front()->data << " ";
        if (qu.front()->left != NULL)
            qu.push(qu.front()->left);
        if (qu.front()->right != NULL)
            qu.push(qu.front()->right);
        qu.pop();
        bfsiteratortraverse(qu);
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

    std::queue<struct node *> q;
    q.push(proot);
    bfsiteratortraverse(q);
    q.push(proot);
    bfsiteratordelete(q);
    q.push(proot);
    bfsiteratortraverse(q);

    return 0;
}