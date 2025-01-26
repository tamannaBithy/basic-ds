#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val); // o(logN)
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " "; /// o(logN)
    }
    cout << endl;

    if (s.count(4))
        cout << "ache" << endl;
    else
        cout << "nai" << endl;
    return 0;
}

///// set behind the scene balanced-bst maintain kore tai aitar complexity kokhno worst bst er moto o(n) hoy na, always o(logN) hoy 1ta val er jonno