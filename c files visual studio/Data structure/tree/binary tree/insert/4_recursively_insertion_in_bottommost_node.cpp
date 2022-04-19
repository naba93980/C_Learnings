//incorrect does not work
//         1
//       /   \
//     2       3
//   /   \    /  \
// 4      5 4      5

#include <iostream>

struct node
{
    int data;
    int lcount;
    int rcount;
    struct node *left;
    struct node *right;
    node(int dataa)
    {
        data = dataa;
        left = NULL;
        right = NULL;
        lcount = 0;
        rcount = 0;
    }
};
int insertdfs(int data, struct node **p)
{
    if (*p == NULL)
    {
        *p = new node(data);
        return 1;
    }
    if ((*p)->left == NULL)
    {
        (*p)->lcount = 1;
        (*p)->left = new node(data);
        return 1;
    }
    if ((*p)->right == NULL)
    {
        (*p)->rcount = 1;
        (*p)->right = new node(data);
        return 1;
    }
    if (((*p)->left != NULL) && ((*p)->right != NULL))
    {
        if (((*p)->left->lcount == 1) && ((*p)->left->rcount == 1))
        {
            if (insertdfs(data, &((*p)->right)))
                return 1;
            else
            {
                if (insertdfs(data, &((*p)->left->left)))
                    return 1;
            }
        }
    }
    // if (((*p)->left != NULL && (*p)->right == NULL))
    // {

    //     if () == 1)
    //         return 1;
    // }
    // return 1;
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    struct node *root = NULL;
    int val = 0;
    // Loop to insert nodes in Binary Tree in level order
    for (int i = 0; i < size; i++)
        val = insertdfs(arr[i], &root);
    preordertraverse(root);
    std::cout << '\n';
    return 0;
}