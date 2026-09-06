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
    int minCameraCover(TreeNode *root)
    {
        if (traversal(root) == 0)
            count_++;

        return count_;
    }

private:
    int count_{0};

    int traversal(TreeNode *root)
    {
        if (root == nullptr)
            return 2;

        auto left = traversal(root->left);
        auto right = traversal(root->right);

        if (left == 0 || right == 0)
        {
            count_++;
            return 1;
        }

        if (left == 1 || right == 1)
            return 2;

        return 0;
    }
};
