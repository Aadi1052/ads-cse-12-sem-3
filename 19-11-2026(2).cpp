// Pre-order, In-order, Post-order Traversal

#include <iostream>
using namespace std;

class Tree
{
    struct Node
    {
        char data;
        Node *left;
        Node *right;

        Node(char d)
        {
            this->data = d;
            this->left = this->right = nullptr;
        }
    };

public:
    Node *Root = nullptr;

    Tree()
    {
        Node *f = new Node('F');
        Node *b = new Node('B');
        Node *g = new Node('G');
        Node *a = new Node('A');
        Node *d = new Node('D');
        Node *i = new Node('I');
        Node *c = new Node('C');
        Node *e = new Node('E');
        Node *h = new Node('H');

        f->left = b;
        f->right = g;

        b->left = a;
        b->right = d;

        g->right = i;

        d->left = c;
        d->right = e;

        i->left = h;

        Root = f;
    }

    // Preorder: Root -> Left -> Right
    void preorder(Node *ptr)
    {
        if (ptr != nullptr)
        {
            cout << ptr->data << " ";
            preorder(ptr->left);
            preorder(ptr->right);
        }
    }

    // Inorder: Left -> Root -> Right
    void inorder(Node *ptr)
    {
        if (ptr != nullptr)
        {
            inorder(ptr->left);
            cout << ptr->data << " ";
            inorder(ptr->right);
        }
    }

    // Postorder: Left -> Right -> Root
    void postorder(Node *ptr)
    {
        if (ptr != nullptr)
        {
            postorder(ptr->left);
            postorder(ptr->right);
            cout << ptr->data << " ";
        }
    }
};

int main()
{
    Tree t;

    cout << "Preorder: ";
    t.preorder(t.Root);

    cout << "\nInorder: ";
    t.inorder(t.Root);

    cout << "\nPostorder: ";
    t.postorder(t.Root);

    return 0;
}