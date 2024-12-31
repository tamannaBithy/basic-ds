#include <bits/stdc++.h>
using namespace std;

//// test case 1
// int main()
// {
//     list<int> l;
//     while (true)
//     {

//         int x;
//         cin >> x;
//         if (x == -1)
//             break;
//         l.push_back(x);
//     }

//     l.sort();
//     l.unique();

//     for (int val : l)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

///// test case 2 & 3
// int main()
// {
//     list<string> l;
//     string x;
//     while (cin >> x && x != "end")
//     {
//         l.push_back(x);
//     }

//     int q;
//     cin >> q;
//     cin.ignore();
//     auto current = l.begin();
//     for (int i = 0; i < q; i++)
//     {
//         string v;
//         getline(cin, v);

//         if (v.substr(0, 5) == "visit")
//         {
//             string target = v.substr(6);
//             auto it = find(l.begin(), l.end(), target);
//             if (it != l.end())
//             {
//                 current = it;
//                 cout << target << endl;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (v == "next")
//         {
//             auto nextword = next(current, 1);
//             if (nextword != l.end())
//             {
//                 current = nextword;
//                 cout << *current << endl;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//         else if (v == "prev")
//         {
//             if (current != l.begin())
//             {
//                 --current;
//                 cout << *current << endl;
//             }
//             else
//             {
//                 cout << "Not Available" << endl;
//             }
//         }
//     }
//     return 0;
// }

///// test case 4 & 5

int main()
{
    list<int> l;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            int size = l.size();

            if (v < size)
            {
                l.erase(next(l.begin(), v));
            }
        }

        cout << "L -> ";
        for (int val : l)
        {
            cout << val << " ";
        }
        cout << endl;
        cout << "R -> ";

        for (auto it = l.rbegin(); it != l.rend(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}