#include <limits>

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
    bool isValidBST(TreeNode *root)
    {
        return traversal(root, std::numeric_limits<long long>::min(), std::numeric_limits<long long>::max());
    }

private:
    bool traversal(TreeNode *root, long long min, long long max)
    {
        if (root == nullptr)
            return true;

        if (root->val <= min || root->val >= max)
            return false;

        if (!traversal(root->left, min, root->val))
            return false;

        return traversal(root->right, root->val, max);
    }
};
