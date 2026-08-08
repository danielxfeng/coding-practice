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
        return travelsal(root, false);
    }

private:
    int travelsal(TreeNode *root, bool isLeft)
    {
        if (root == nullptr)
            return 0;

        if (isLeft && root->left == nullptr && root->right == nullptr)
            return root->val;

        return travelsal(root->left, true) + travelsal(root->right, false);
    }
};
