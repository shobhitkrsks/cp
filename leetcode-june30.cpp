#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pathToP, pathToQ;
        findPath(root, pathToP, p);
        findPath(root, pathToQ, q);

        auto itr1=pathToP.begin(), itr2=pathToQ.begin();
        TreeNode* temp;

        while(itr1!=pathToP.end() && itr2!=pathToQ.end())
        {
            if(*itr1==*itr2)
            {
                temp=*itr1;
            }
            else
                break;
        }

        return temp;

    }

    bool findPath(TreeNode* root, vector<TreeNode*> &path, TreeNode *target)
    {
        if(root==NULL)
            return false;

        if(root==target)
        {
            path.push_back(root);
            return true;
        }

        if(findPath(root->left, path, target) || findPath(root->right, path, target))
        {
            path.push_back(root);
            return true;
        }

        return false;
    }
};

int main()
{


    return 0;
}