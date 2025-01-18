#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (!st.empty())
        {

            if ((c == '0' && st.top() == '1') || (c == '1' && st.top() == '0'))
            {
                st.pop();
                continue;
            }
        }

        st.push(c);
    }

    return st.empty();
}

int main()
{
    int T;
    cin >> T;

    vector<string> results;
    for (int t = 0; t < T; t++)
    {
        string s;
        cin >> s;

        if (isValid(s))
        {
            results.push_back("YES");
        }
        else
        {
            results.push_back("NO");
        }
    }

    for (const string &result : results)
    {
        cout << result << endl;
    }

    return 0;
}
