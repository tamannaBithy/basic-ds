
// You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

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

void print_linked_list(Node *head)
{
    cout << endl;
    cout << "your linked list : ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    int min = INT_MAX;
    int max = INT_MIN;

    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }

        if (tmp->val > max)
        {
            max = tmp->val;
        }
    }

    int diff = max - min;

    cout << diff;

    return 0;
}
