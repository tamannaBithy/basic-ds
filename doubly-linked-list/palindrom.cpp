#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void is_palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    int flag = 0;
    while (i != j)
    {
        if (i->val != j->val)
        {
            flag = 1;
            break;
        }
        i = i->next;
        j = j->prev;
    }

    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_tail(head, tail, val);
    }

    is_palindrome(head, tail);

    return 0;
}