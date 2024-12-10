#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int &x : a)
    {
        if (x > 0)
            x = 1;
        else if (x < 0)
            x = 2;
    }

    for (int x : a)
    {
        cout << x << " ";
    }
    return 0;
}