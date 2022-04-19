#include <stdio.h>
#include <stdlib.h>
int matched = 0;
struct qnode
{
    int size;
    struct node *(*arr);
    int f, b;
};

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(struct node *p)
{
    printf("do u want to create new node\n");
    int response;
    scanf("%d", &response);
    if (response == 1)
    {
        int data;
        printf("enter data \n");
        scanf("%d", &data);
        p = malloc(sizeof(struct node));
        p->data = data;
        p->left = createnode(p->left);
        p->right = createnode(p->right);
        return p;
    }
    else
    {
        return NULL;
    }
    return p;
};
struct node *createnewnode(int data)
{
    struct node *r = (struct node *)malloc(sizeof(struct node));
    r->data = data;
    r->left = NULL;
    r->right = NULL;
    return r;
};
void enque(struct qnode *qu, struct node *nroot)
{
    if ((qu->b == -1) && (qu->f == -1))
    {

        (qu->b)++;
        (qu->f)++;
        qu->arr[qu->b] = nroot;
    }
    else
    {
        qu->b++;
        qu->arr[qu->b] = nroot;
    }
    return;
}
void deque(struct qnode qu)
{
    qu.f++;
    return;
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
void insert(int data, struct qnode *qu, struct node *root)
{
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
                enque(qu, root->left);
            }
            if (root->right == NULL)
            {
                root->right = createnewnode(data);
                return;
            }
            else
            {
                enque(qu, root->right);
            }
        }
        else
        {
            enque(qu, root->left);
            enque(qu, root->right);
            insert(data, qu, qu->arr[qu->f++]);
            return;
        }
    }
    return;
}
void insertdfs(int data, struct node *root)
{
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
                if (root->right == NULL)
                {
                    root->right = createnewnode(data);
                    return;
                }
            }
        }
        else
        {
            insertdfs(data, root->left);
            return;
        }
    }
    return;
}
void searchdfs(int data, struct node *p)
{
    if (p == NULL)
        return;
    if (p->data == data)
    {
        matched = 1;
        return;
    }
    searchdfs(data, p->left);
    searchdfs(data, p->right);
    return;
}
int main()
{
    //CREATING A BINARY TREE

    // struct node *p = NULL;
    // p = createnode(p);

    //PREORDER TRAVERSAL

    // preordertraverse(p);
    // printf("\n");

    //POSTORDER TRAVERSAL

    // postordertraverse(p);
    // printf("\n");

    //INORDER TRAVERSAL

    // inordertraverse(p);

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

    // inordertraverse(proot);

    //LEVEL ORDER INSERTION

    struct qnode *qu;
    qu = (struct qnode *)malloc(sizeof(struct qnode));
    qu->size = 10;
    qu->b = -1;
    qu->f = -1;
    qu->arr = (struct node **)malloc(qu->size * sizeof(struct node *));

    //         5
    //       /   \
    //      /     \
    //     10     15
    //    /  \    /
    //   20  25  30

    insert(30, qu, proot); //bfs - check first if at left or right if there is any null, if not only then put both the child node in queue.
    inordertraverse(proot);
    printf("\n");

    //         5
    //       /   \
    //      /     \
    //     10     15
    //    /  \    /
    //   20  25  30
    //  /
    // 35

    insertdfs(35, proot); //dfs method - go deep as possible, then put the new node
    inordertraverse(proot);
    printf("\n");
    insertdfs(40, proot);
    inordertraverse(proot);

    printf("\n-------------------\n");
    searchdfs(65, proot);
    if (matched == 1)
        printf("found\n");
    else
        printf("not found\n");
    return 0;
}