
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int v)
{

    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    // temp akhon last node e
    tail->next = newnode;
    tail = newnode;
}

bool are_same(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
            return false;

        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    return (tmp1 == NULL && tmp2 == NULL);
}

int main()
{

    int val;
    Node *head1 = NULL, *tail1 = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }

    Node *head2 = NULL, *tail2 = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head2, tail2, val);
    }

    if (are_same(head1, head2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}