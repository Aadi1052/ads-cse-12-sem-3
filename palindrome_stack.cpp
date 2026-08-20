#include <iostream>
using namespace std;

int main()
{
    int n, temp, digit;
    int stack[100];
    int top = -1;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    // Push digits into stack
    while (temp > 0)
    {
        digit = temp % 10;
        stack[++top] = digit;
        temp = temp / 10;
    }

    temp = n;
    bool flag = true;

    // Compare with stack
    while (temp > 0)
    {
        digit = temp % 10;

        if (digit != stack[top])
        {
            flag = false;
            break;
        }

        top--;
        temp = temp / 10;
    }

    if (flag)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}