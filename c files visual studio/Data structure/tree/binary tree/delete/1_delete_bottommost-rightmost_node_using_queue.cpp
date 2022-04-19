//1. delete the bottommost-rightmost node and copy its data to the node whose data is to be deleted (using iterator/queue)
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
int temp;
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
    {
        return;
    }
    printf("%d ", p->data);
    preordertraverse(p->left);
    preordertraverse(p->right);
    return;
}
void bfsiteratordelete(std::queue<struct node *> &qu, std::vector<struct node *> &v)
{
    if (qu.empty())
        return;
    if (qu.front()->left != NULL)
        qu.push(qu.front()->left);
    if (qu.front()->right != NULL)
        qu.push(qu.front()->right);
    v.push_back(qu.front());
    qu.pop();
    bfsiteratordelete(qu, v);
    return;
}
void deletenode(vector<struct node *> v)
{
    cout << "\n Enter the value you wanna delete\n";
    int val;
    cin >> val;
    if (val == v.back()->data)
    {
        free(v.back());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i]->right == v.back())
            {
                v[i]->right = NULL;
                break;
            }
            if (v[i]->left == v.back())
            {
                v[i]->left = NULL;
                break;
            }
        }
    }
    else
    {
        temp = v.back()->data;
        free(v.back());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i]->right == v.back())
            {
                v[i]->right = NULL;
                break;
            }

            if (v[i]->left == v.back())
            {
                v[i]->left = NULL;
                break;
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i]->data == val)
            {
                v[i]->data = temp;
                break;
            }
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

    std::vector<struct node *> v;
    std::queue<struct node *> q;
    preordertraverse(proot);

    q.push(proot);
    bfsiteratordelete(q, v);

    deletenode(v);
    preordertraverse(proot);

    return 0;
}