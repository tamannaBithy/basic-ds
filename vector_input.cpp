#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<int> v(n);  /// jodi ami array length bole di tahle aivabe
    vector<int> v; //// jodi array length na bole di tahle o array bananor way ache
    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}