#include <iostream>
using namespace std;

int fibonacci(int n, int a = 0, int b = 1)
{
    if (n == 0)
        return a;

    return fibonacci(n - 1, b, a + b);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Nth Fibonacci number = " << fibonacci(n);

    return 0;
}