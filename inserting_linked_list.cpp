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
    cout << endl;
}

void insert_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        /// ache 3 ta position kintu ami insert korte chacchi 100 number positione se khetre
        if (tmp == NULL)
        {
            cout << endl
                 << "invalid position" << endl;
            return;
        }
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

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "invalid position" << endl;
            return;
        }
    }

    if (tmp->next == NULL)
    {
        cout << endl
             << "invalid position" << endl;
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "head is not available" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
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
        // cout << "op 5: delete at any position without head" << endl;
        // cout << "op 6: delete from head" << endl;
        // cout << "op 7: terminate" << endl;
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
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
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
// 5 --- option 5
// 1 --- pos
// 2 --- for printing the list again
// 7 ---- terminate