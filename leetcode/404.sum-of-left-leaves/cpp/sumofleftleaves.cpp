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
    int sumOfLeftLeaves(TreeNode *root)
    {
        return traversal(root, false);
    }

private:
    int traversal(TreeNode *root, bool isLeft)
    {
        if (root == nullptr)
            return 0;

        if (isLeft && root->left == nullptr && root->right == nullptr)
            return root->val;

        return traversal(root->left, true) + traversal(root->right, false);
    }
};
