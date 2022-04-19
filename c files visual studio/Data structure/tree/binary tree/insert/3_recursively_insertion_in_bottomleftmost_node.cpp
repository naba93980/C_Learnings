//3. recursively insertion in bottomleftmost node
//          1
//         / \
//        2   3
//       / \
//      4   5
//     / \
//    6   7

#include <iostream>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int dataa)
    {
        data = dataa;
        left = NULL;
        right = NULL;
    }
};
struct node *insertdfs(int data, struct node *p)
{
    if (p == NULL)
    {
        p = new node(data);
        return p;
    }
    if (p->left == NULL)
    {
        p->left = new node(data);
        return p;
    }
    if (p->right == NULL)
    {
        p->right = new node(data);
        return p;
    }
    p->left = insertdfs(data, p->left);
    return p;
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    struct node *root = NULL;
    // Loop to insert nodes in Binary Tree in level order
    for (int i = 0; i < size; i++)
        root = insertdfs(arr[i], root);
    preordertraverse(root);
    std::cout << '\n';
    return 0;
}