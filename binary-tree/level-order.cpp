#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

////////// for the sum without leaf nodes : testcase-3
// void level_order(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     queue<Node *> q;
//     q.push(root);
//     int sum = 0;
//     while (!q.empty())
//     {
//         Node *f = q.front();
//         q.pop();

//         if (f->left != NULL || f->right != NULL)
//         {
//             sum += f->val;
//         }

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
//     cout << sum << endl;
// }

//////////////  leaf nodes in descending order : testcase-4
// void level_order(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     vector<int> v;
//     queue<Node *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node *f = q.front();
//         q.pop();

//         if (f->left == NULL && f->right == NULL)
//         {
//             v.push_back(f->val);
//         }
//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
//     sort(v.rbegin(), v.rend());
//     for (int val : v)
//     {
//         cout << val << " ";
//     }
// }

//////////////  print all the node's values in given level : testcase-1, 2
void level_order(Node *root, int lvl)
{
    if (root == NULL)
    {
        return;
    }

    vector<int> v;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> f = q.front();
        q.pop();
        Node *data = f.first;
        int level = f.second;

        if (level == lvl)
        {
            v.push_back(data->val);
        }

        if (data->left)
            q.push({data->left, level + 1});
        if (data->right)
            q.push({data->right, level + 1});
    }

    for (int val : v)
    {
        cout << val << " ";
    }
}

int max_depth(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    int depth = max_depth(root);
    int level;
    cin >> level;
    if (level >= depth)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        level_order(root, level);
    }

    return 0;
}