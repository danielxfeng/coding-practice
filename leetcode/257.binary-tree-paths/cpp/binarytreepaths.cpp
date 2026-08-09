#include <string>
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
    std::vector<std::string> binaryTreePaths(TreeNode *root)
    {
        return traversal(root, "");
    }

private:
    std::vector<std::string> traversal(TreeNode *root, std::string path)
    {
        if (root == nullptr)
            return {};

        auto val = std::to_string(root->val);
        if (path == "")
            path = val;
        else
            path += "->" + val;

        if (root->left == nullptr && root->right == nullptr)
            return {path};

        std::vector<std::string> res;

        auto left = traversal(root->left, path);
        auto right = traversal(root->right, path);

        res.insert(res.end(), left.begin(), left.end());
        res.insert(res.end(), right.begin(), right.end());

        return res;
    }
};
