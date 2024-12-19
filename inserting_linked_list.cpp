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

void insert_at_tail(Node *&head, int v)
{

    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // temp akhon last node e
    temp->next = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void insert_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
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

int main()
{
    Node *head = NULL;

    while (true)
    {
        // cout << "op 1: insert at tail" << endl;
        // cout << "op 2: print linked list" << endl;
        // cout << "op 3: insert at any position" << endl;
        // cout << "op 4: insert at head" << endl;
        // cout << "op 5: terminate" << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cin >> pos >> val;
            if (pos == 0)
            {
                insert_at_head(head, pos);
            }
            else
            {
                insert_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            break;
        }
    }

    return 0;
}

// inputs:
// 1 --- option 1
// 200 --- value
// 1
// 100
// 1
// 300
// 3 -- option 3
// 2 50 -- pos & value
// 4  --- option 4
// 50 --- value
// 2 --- for printing the list
// 5 ---- terminate