#include <bits/stdc++.h>
using namespace std;

class Stack {
    vector<int> v;

public:
    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.back();
    }

    bool isEmpty() {
        return v.size() == 0;
    }
};

int main() {
    Stack s;

    s.push(12);
    s.push(10);
    s.push(50);

    cout << s.top();

    return 0;
}