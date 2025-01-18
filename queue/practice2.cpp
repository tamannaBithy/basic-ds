#include <bits/stdc++.h>
using namespace std;

bool isEmptyAfterElimination(const string &s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '1' && !st.empty() && st.top() == '0')
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    return st.empty();
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        if (isEmptyAfterElimination(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
