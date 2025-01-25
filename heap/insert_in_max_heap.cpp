#include <bits/stdc++.h>
using namespace std;

////// max heape maximum valueta roote thake r min heape minimum val

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int val;
    cin >> val;
    v.push_back(val);
    int curr_idx = v.size() - 1;

    while (curr_idx != 0)
    {
        int par_idx = (curr_idx - 1) / 2;
        if (v[par_idx] < v[curr_idx])
            swap(v[par_idx], v[curr_idx]);
        else
            break;
        curr_idx = par_idx;
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

/////// 1 ta val insert complexity o(logN)
//////  n val insert complexity o(NlogN)
///// muloto array er khetre max or min value pete hole protibar insert korar por sort korte hoy & tkhn complexity hoye jay o(n^2logN) jeta heaper complexity theke kharap. tai bar bar insert er por max/min value janar dorkar hole heap use kora hoy

///////// insert in min heap
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     int val;
//     cin >> val;
//     v.push_back(val);
//     int curr_idx = v.size() - 1;

//     while (curr_idx != 0)
//     {
//         int par_idx = (curr_idx - 1) / 2;
//         if (v[par_idx] > v[curr_idx])
//             swap(v[par_idx], v[curr_idx]);
//         else
//             break;
//         curr_idx = par_idx;
//     }
//     for (int x : v)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
//     return 0;
// }