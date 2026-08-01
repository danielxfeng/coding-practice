#include <vector>
#include <deque>

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
    std::vector<int> inorderTraversal(TreeNode *root)
    {
        std::vector<int> res;
        std::deque<TreeNode *> deque;

        if (root == nullptr)
            return res;

        auto curr = root;
        while (curr != nullptr || !deque.empty())
        {
            if (curr != nullptr)
            {
                deque.push_back(curr);
                curr = curr->left;
                continue;
            }

            curr = deque.back();
            deque.pop_back();
            res.push_back(curr->val);
            curr = curr->right;
        }

        return res;
    }
};
