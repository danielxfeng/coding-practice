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
    std::vector<std::vector<int>> levelOrder(TreeNode *root)
    {
        std::vector<std::vector<int>> res;
        std::deque<TreeNode *> nodeQueue;

        if (root != nullptr)
            nodeQueue.push_back(root);

        while (!nodeQueue.empty())
        {
            const int size = nodeQueue.size();
            std::vector<int> layer(size);

            for (int i = 0; i < size; ++i)
            {
                auto curr = nodeQueue.front();
                nodeQueue.pop_front();

                layer[i] = curr->val;

                if (curr->left != nullptr)
                    nodeQueue.push_back(curr->left);
                if (curr->right != nullptr)
                    nodeQueue.push_back(curr->right);
            }

            res.push_back(layer);
        }

        return res;
    }
};
