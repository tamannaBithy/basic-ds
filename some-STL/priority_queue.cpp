#include <bits/stdc++.h>
using namespace std;

////// maximum priority queue
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.pop();
    // pq.empty();
    return 0;
}

////// minimum priority queue
// int main()
// {
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(10);
//     pq.push(5);
//     pq.push(30);
//     cout << pq.top() << endl;
//     return 0;
// }