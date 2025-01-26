#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();

//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         getline(cin, s);
//         stringstream ss(s);
//         string word;
//         map<string, int> mp;
//         string max_word;
//         int max_count = 0;

//         while (ss >> word)
//         {
//             mp[word]++;
//             if (mp[word] > max_count)
//             {
//                 max_count = mp[word];
//                 max_word = word;
//             }
//         }

//         cout << max_word << " " << max_count << endl;
//     }

//     return 0;
// }

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    bool operator<(const Student &other) const
    {
        if (marks == other.marks)
            return roll > other.roll;
        return marks < other.marks;
    }
};

int main()
{
    priority_queue<Student> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (x == 2)
        {

            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
        else
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
    }

    return 0;
}