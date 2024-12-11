#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> a(n + 1);
    vector<long long int> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    /// muloto ai part tukukei prefix sum bole, aivabe without loop puro arraytar summation ber kore neya jay
    pre[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    for (int i = 0; i < q; i++)
    {

        int l, r;
        cin >> l >> r;
        long long int sum;
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }

        cout << sum << endl;
    }
    return 0;
}