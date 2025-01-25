#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["tamim"] = 2; // for 1 val = o(logN)
    mp["shamim"] = 5;
    mp["jara"] = 3;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {                                                   // for n val = o(nlogN)
        cout << it->first << " " << it->second << endl; // for 1 val = o(logN)
    }

    if (mp.count("hamim"))
    {
        cout << "ache";
    }
    else
    {
        cout << "nai";
    }
    return 0;
}

////// mape key-value pair akare thake