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

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
    if (tail == NULL)
    {
        tail = newnode;
    }
}

void delete_from_position(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
        return;
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            return;
        }
    }

    if (tmp->next == NULL)
    {
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL)
    {
        tail = tmp;
    }
    delete deleteNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void print_linked_list(Node *head)
{

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
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int op, val;
        cin >> op >> val;
        if (op == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (op == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else if (op == 2)
        {
            if (val == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, tail, val);
            }
        }

        print_linked_list(head);
    }
    return 0;
}