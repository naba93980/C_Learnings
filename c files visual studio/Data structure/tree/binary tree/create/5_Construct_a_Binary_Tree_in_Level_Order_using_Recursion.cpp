//5. Construct a Binary Tree in Level Order using Recursion

//Idea is to keep track of the number of child nodes in the left sub-tree and right sub-tree and then take the decision on the basis of these counts.

//When the count of children nodes in left and right sub - tree are equal, then the node has to be inserted in left sub - tree by creating a new level in the binary tree.
//When the count of children nodes in the left sub - tree is greater than the count of the children nodes in the right sub - tree then there are two cases.
//When the left sub - tree is perfect binary tree, then node is to be inserted in right sub - tree.
//When left sub - tree is not perfect binary tree, then node is to be inserted in left sub - tree.
//A perfect binary tree with n levels(starting from 0) have 2^(n+1) - 1 nodes with all the leaf nodes at same level.

#include <iostream>
using namespace std;

// Structure of the Node of Binary tree with count of Children nodes in left sub-tree and right sub-tree.
struct Node
{
    int data;
    int rcount;
    int lcount;
    struct Node *left;
    struct Node *right;
};

// Function to create a new Node
struct Node *newNode(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    temp->rcount = 0;
    temp->lcount = 0;
    return temp;
}

// Function to check whether the given Binary tree is a perfect binary tree using the no. of nodes in tree.
bool isPBT(int count)
{
    count = count + 1;

    if (count % 2 == 0)
        return true;
    else
        return false;
}

// Recursive function to insert elements in a binary tree
struct Node *insert(struct Node *root, int data)
{

    // Condition when root is NULL
    if (root == NULL)
    {
        struct Node *n = newNode(data);
        return n;
    }

    // Condition when count of left sub-tree nodes is equal to the count of right sub-tree nodes
    if (root->rcount == root->lcount)
    {
        root->left = insert(root->left, data);
        root->lcount += 1;
    }

    // Condition when count of left sub-tree nodes is greater than the right sub-tree nodes
    else if (root->rcount < root->lcount)
    {

        // Condition when left Sub-tree is Perfect Binary Tree then Insert in right sub-tree.
        if (isPBT(root->lcount))
        {
            root->right = insert(root->right, data);
            root->rcount += 1;
        }

        // If Left Sub-tree is not Perfect Binary Tree then Insert in left sub-tree
        else
        {
            root->left = insert(root->left, data);
            root->lcount += 1;
        }
    }
    return root;
}

// Function for inorder Traversal of tree.
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Driver Code
int main()
{
    int arr[] = {8, 6, 7, 12, 5, 1, 9};
    int size = sizeof(arr) / sizeof(int);
    struct Node *root = NULL;

    // Loop to insert nodes in Binary Tree in level order
    for (int i = 0; i < size; i++)
        root = insert(root, arr[i]);
    inorder(root);
    return 0;
}
