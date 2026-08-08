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
    int maxDepth(TreeNode *root)
    {
        std::deque<TreeNode *> nodeQueue;
        int depth = 0;

        if (root != nullptr)
            nodeQueue.push_back(root);

        while (!nodeQueue.empty())
        {
            int size = nodeQueue.size();

            depth++;
            for (int i = 0; i < size; ++i)
            {
                auto curr = nodeQueue.front();
                nodeQueue.pop_front();

                if (curr->left != nullptr)
                    nodeQueue.push_back(curr->left);
                if (curr->right != nullptr)
                    nodeQueue.push_back(curr->right);
            }
        }

        return depth;
    }
};
