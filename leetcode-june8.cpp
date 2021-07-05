#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    int n = preorder.size();
    if (n == 0)
        return nullptr;

    int rootData = preorder[0];

    int idx = find(inorder.begin(), inorder.end(), rootData) - inorder.begin();

    vector<int> leftPreorder, leftInorder, rightPreorder, rightInorder;

    for (int i = 0; i < idx; i++)
    {
        leftPreorder.push_back(preorder[i + 1]);
        leftInorder.push_back(inorder[i]);
    }

    for (int i = idx + 1; i < n; i++)
    {
        rightPreorder.push_back(preorder[i]);
        rightInorder.push_back(inorder[i]);
    }

    TreeNode *node = new TreeNode(rootData, buildTree(leftPreorder, leftInorder), buildTree(rightPreorder, rightInorder));
    return node;
}

void printPostorder(struct TreeNode* node)
{
    if (node == nullptr)
        return;
 
    // first recur on left subtree
    printPostorder(node->left);
 
    // then recur on right subtree
    printPostorder(node->right);
 
    // now deal with the node
    cout << node->val << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> preorder, inorder;
    int t;

    cout << "Enter preorder: ";
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        preorder.push_back(t);
    }

    cout << "Enter inorder: ";
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        inorder.push_back(t);
    }

    TreeNode *head = buildTree(preorder, inorder);

    printPostorder(head);

    return 0;
}