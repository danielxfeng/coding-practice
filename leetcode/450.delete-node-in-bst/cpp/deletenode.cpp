
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
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == nullptr)
            return nullptr;

        if (root->val != key)
        {
            if (root->val < key)
                root->right = deleteNode(root->right, key);
            else
                root->left = deleteNode(root->left, key);
            return root;
        }

        if (root->left == nullptr)
            return root->right;
        if (root->right == nullptr)
            return root->left;

        auto newRoot = root->right;
        auto curr = root->right;

        while (curr->left != nullptr)
            curr = curr->left;

        curr->left = root->left;
        return newRoot;
    }
};
