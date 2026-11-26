// you are given two string s and r and an array of integers with t values positive integer represent right rotation by the given value and negative integer represent left rotation by the given value apply these T operation on as and compare the result with r.if tey are same print password accpected otherwise print try again.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r;

    cin >> s >> r;

    int n;
    cin >> n;

    int t[n];

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int len = s.length();
    for (int i = 0; i < n; i++)
    {

        int x = t[i] % len;

        if (x > 0)
        {
            // Right rotation
            string temp = "";

            for (int j = len - x; j < len; j++)
                temp += s[j];

            for (int j = 0; j < len - x; j++)
                temp += s[j];

            s = temp;
        }

        else if (x < 0)
        {
            // Left rotation
            x = -x;

            string temp = "";

            for (int j = x; j < len; j++)
                temp += s[j];

            for (int j = 0; j < x; j++)
                temp += s[j];

            s = temp;
        }
    }

    if (s == r)
        cout << "Password Accepted";
    else
        cout << "Try Again";

    return 0;
}