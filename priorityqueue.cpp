#include <iostream>
using namespace std;

#define MAX 5

struct Node
{
    int data;
    int priority;
};

Node pq[MAX];
int n = 0;

// Insert element according to priority
void enqueue(int data, int p)
{
    if (n == MAX)
    {
        cout << "Priority Queue is Full" << endl;
        return;
    }

    Node x;

    x.data = data;
    x.priority = p;

    int i = 0;

    // Find correct position
    while (i < n && pq[i].priority >= p)
    {
        i++;
    }

    // Shift elements to right
    for (int j = n; j > i; j--)
    {
        pq[j] = pq[j - 1];
    }

    // Insert new node
    pq[i] = x;

    n++;

    cout << "Element inserted successfully" << endl;
}

// Delete highest priority element
void dequeue()
{
    if (n == 0)
    {
        cout << "Priority Queue is Empty" << endl;
        return;
    }

    cout << "Deleted element: " << pq[0].data << endl;

    // Shift elements to left
    for (int i = 0; i < n - 1; i++)
    {
        pq[i] = pq[i + 1];
    }

    n--;
}

// Show highest priority element
void peek()
{
    if (n == 0)
    {
        cout << "Priority Queue is Empty" << endl;
        return;
    }

    cout << "Highest Priority Element: "
         << pq[0].data << endl;

    cout << "Priority: "
         << pq[0].priority << endl;
}

// Display queue
void display()
{
    if (n == 0)
    {
        cout << "Priority Queue is Empty" << endl;
        return;
    }

    cout << "\nPriority Queue:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Data: " << pq[i].data
             << "  Priority: " << pq[i].priority
             << endl;
    }
}

int main()
{
    enqueue(10, 2);
    enqueue(20, 5);
    enqueue(30, 1);
    enqueue(40, 4);
    enqueue(50, 3);

    display();

    cout << "\n";
    peek();

    cout << "\n";
    dequeue();

    display();

    cout << "\n";
    peek();

    return 0;
}