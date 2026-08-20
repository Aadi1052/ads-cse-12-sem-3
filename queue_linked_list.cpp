#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *next;

    Node(int data)
    {
        info = data;
        next = NULL;
    }
};

Node *front = NULL;
Node *rear = NULL;

bool isEmpty()
{
    return front == NULL;
}

void transfer()
{

    if (isEmpty())
    {
        cout << "Empty Queue";
        return;
    }

    Node *temp = front;

    while (temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);

    front = n1;
    n1->next = n2;
    n2->next = n3;
    rear = n3;

    transfer();

    return 0;
}