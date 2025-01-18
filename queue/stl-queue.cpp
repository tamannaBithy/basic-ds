#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     queue<int> q;

//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         q.push(x);
//     }
//     while (!q.empty())
//     {
//         cout << q.front() << endl;
//         q.pop();
//     }
//     return 0;
// }

int main()
{
    queue<int> q;
    stack<int> st;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    int flag = 1;

    while (!q.empty() && !st.empty())
    {
        if (q.front() != st.top())
        {
            flag = 0;
            break;
        }
        q.pop();
        st.pop();
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}