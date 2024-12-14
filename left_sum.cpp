#include <bits/stdc++.h>
using namespace std;

// Description:
// Given an array of integers, calculate the sum of all elements to the left of each element in the array. If there are no elements to the left, the sum is zero
// Explanation:
// Left Sum of Index 0 is (there is no index left side of index 0, so the sum is 0) : 0
// Left Sum of Index 1 is : (sum of elements from index 0 to 0) = 1
// Left Sum of Index 2 is (sum of elements from index 0 to 1) : (1+2) = 3
// Left Sum of Index 3 is (sum of elements from index 0 to 2) : (1+2+3) = 6
// Left Sum of Index 4 is (sum of elements from index 0 to 3) : (1+2+3+4) = 10

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> pre(n);

    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int result = pre[i] - a[i];
        cout << result << " ";
    }

    return 0;
}