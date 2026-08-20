#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string exp = "234*+";

    stack<int> st;

    for (char ch : exp) {

        // Operand
        if (isdigit(ch)) {
            st.push(ch - '0');
        }

        // Operator
        else {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            int result;

            if (ch == '+')
                result = a + b;
            else if (ch == '-')
                result = a - b;
            else if (ch == '*')
                result = a * b;
            else if (ch == '/')
                result = a / b;

            st.push(result);
        }
    }

    cout << "Answer = " << st.top();

    return 0;
}