#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int flag = 0;

//     for (int i = 0; i < n; i++)
//     {
//         auto it = find(a.begin() + i + 1, a.end(), a[i]);
//         if (it != a.end())
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<long long int> a(n);
//     vector<long long int> pre(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     pre[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         pre[i] = pre[i - 1] + a[i];
//     }

//     reverse(pre.begin(), pre.end());
//     for (long long int x : pre)
//     {
//         cout << x << " ";
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         if (is_sorted(v.begin(), v.end()))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int m;
//     cin >> m;
//     vector<int> b(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }

//     int x;
//     cin >> x;

//     a.insert(a.begin() + x, b.begin(), b.end());

//     for (int q : a)
//     {
//         cout << q << " ";
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int mid = n / 2;

//     for (int i = 0; i < n; i++)
//     {
//         string line(n, ' ');

//         if (i < mid)
//         {

//             line[i] = '\\';
//             line[n - i - 1] = '/';
//         }
//         else if (i == mid)
//         {

//             line[mid] = 'X';
//         }
//         else
//         {

//             line[n - i - 1] = '/';
//             line[i] = '\\';
//         }

//         cout << line << endl;
//     }

//     return 0;
// }
