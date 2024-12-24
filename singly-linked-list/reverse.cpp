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

    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node *head)
{
    cout << "your linked list : ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

/////// reversing without changing the memory address
// void print_reverse(Node *n)
// {

//     while (n == NULL)
//     {
//         return;
//     }
//     print_reverse(n->next);
//     cout << n->val << " ";
// }

/////// reversing also changing the memory address
void print_reverse(Node *&head, Node *crnt)
{

    while (crnt->next == NULL)
    {
        head = crnt;
        return;
    }
    print_reverse(head, crnt->next);
    crnt->next->next = crnt;
    crnt->next = NULL;
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
    print_reverse(head, head);
    print_linked_list(head);

    return 0;
}