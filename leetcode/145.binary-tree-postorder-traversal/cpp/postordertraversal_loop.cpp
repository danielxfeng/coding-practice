#include <vector>
#include <deque>
#include <algorithm>

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
    std::vector<int> postorderTraversal(TreeNode *root)
    {
        std::vector<int> res;
        std::deque<TreeNode *> nodeStack;

        if (root == nullptr)
            return res;

        nodeStack.push_back(root);

        while (!nodeStack.empty())
        {
            auto *curr = nodeStack.back();
            nodeStack.pop_back();

            res.push_back(curr->val);
            if (curr->left != nullptr)
                nodeStack.push_back(curr->left);

            if (curr->right != nullptr)
                nodeStack.push_back(curr->right);
        }

        std::reverse(res.begin(), res.end());
        return res;
    }
};
