#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    b.insert(b.end(), a.begin(), a.end());
    for (int x : b)
    {
        cout << x << " ";
    }
    return 0;
}