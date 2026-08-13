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
    TreeNode *convertBST(TreeNode *root)
    {
        return traversal(root);
    }

private:
    int prev_{0};
    TreeNode *traversal(TreeNode *root)
    {
        if (root == nullptr)
            return nullptr;

        root->right = traversal(root->right);
        root->val += prev_;
        prev_ = root->val;
        root->left = traversal(root->left);

        return root;
    }
};
