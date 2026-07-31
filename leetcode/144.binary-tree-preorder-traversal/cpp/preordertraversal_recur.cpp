#include <vector>

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
    std::vector<int> preorderTraversal(TreeNode *root)
    {
        std::vector<int> res;
        traversal(root, res);
        return res;
    }

private:
    void traversal(TreeNode *root, std::vector<int> &res)
    {
        if (root == nullptr)
            return;

        res.push_back(root->val);
        traversal(root->left, res);
        traversal(root->right, res);
    }
};
