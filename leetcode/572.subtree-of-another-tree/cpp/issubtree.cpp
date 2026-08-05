struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        if (root == nullptr || subRoot == nullptr)
            return false;
        if (root->val == subRoot->val && isSameTree(root, subRoot))
            return true;

        if (isSubtree(root->left, subRoot))
            return true;
        return isSubtree(root->right, subRoot);
    }

private:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
            return true;
        if (p == nullptr || q == nullptr)
            return false;
        if (p->val != q->val)
            return false;

        if (!isSameTree(p->left, q->left))
            return false;
        return isSameTree(p->right, q->right);
    }
};
