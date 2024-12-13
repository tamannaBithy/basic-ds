#include <bits/stdc++.h>
using namespace std;

////// Description: Write a program to determine if there is a duplicate of a given target value in a sorted array of integers. If a duplicate is found, print true. If no duplicate is found, print false.
// Note: Ignore the time complexity for input operations; focus on achieving O(log⁡n) time complexity for checking duplicates.

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int value;
    cin >> value;

    int l1 = 0;
    int r1 = n - 1;
    int first = -1;

    while (r1 >= l1)
    {
        int mid = (l1 + r1) / 2;
        if (a[mid] == value)
        {
            first = mid;
            r1 = mid - 1;
        }
        else if (value < a[mid])
        {
            r1 = mid - 1;
        }
        else
        {
            l1 = mid + 1;
        }
    }

    int l2 = 0;
    int r2 = n - 1;
    int last = -1;

    while (r2 >= l2)
    {
        int mid = (l2 + r2) / 2;
        if (a[mid] == value)
        {
            last = mid;
            l2 = mid + 1;
        }
        else if (value < a[mid])
        {
            r2 = mid - 1;
        }
        else
        {
            l2 = mid + 1;
        }
    }

    if (first != -1 && last != -1 && first < last)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
