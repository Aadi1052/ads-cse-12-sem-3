
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int oneChild = 0;
int twoChildren = 0;

void countNodes(Node *root)
{
    if (root == NULL)
        return;

    // Node having exactly one child
    if ((root->left == NULL && root->right != NULL) ||
        (root->left != NULL && root->right == NULL))
    {
        oneChild++;
    }

    // Node having two children
    if (root->left != NULL && root->right != NULL)
    {
        twoChildren++;
    }

    countNodes(root->left);
    countNodes(root->right);
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);

    countNodes(root);

    cout << "Nodes having one child: " << oneChild << endl;
    cout << "Nodes having two children: " << twoChildren << endl;

    return 0;
}
