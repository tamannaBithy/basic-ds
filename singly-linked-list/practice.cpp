// Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.

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

void insert_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}

int size_linked_list(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
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

    int indx;
    while (cin >> indx >> val)
    {
        int sz = size_linked_list(head);
        if (indx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (indx == sz)
        {
            insert_at_tail(head, tail, val);
        }
        else if (indx == 0)
        {
            insert_at_head(head, val);
        }
        else
        {
            insert_position(head, indx, val);
        }

        print_linked_list(head);
    }

    return 0;
}