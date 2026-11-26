
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

int count = 0;

void DFS(Node *root)
{
    if (root == NULL)
        return;

    if (root->left != NULL && root->right != NULL)
    {
        count++;
    }

    DFS(root->left);
    DFS(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);

    DFS(root);

    cout << "Nodes having two children: " << count;

    return 0;
}
