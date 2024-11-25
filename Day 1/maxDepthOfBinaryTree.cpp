#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

int depth(Node *node)
{
    if (node == nullptr)
        return 0;
    int left = depth(node->left);
    int right = depth(node->right);

    return max(left, right) + 1;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << depth(root) << endl;
}
