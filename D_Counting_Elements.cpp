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

    int findNum = 0;

    for (int i = 0; i < n; i++)
    {
        auto it = find(a.begin(), a.end(), a[i] + 1);
        if (it != a.end())
        {
            findNum++;
        }
    }

    cout << findNum;

    return 0;
}