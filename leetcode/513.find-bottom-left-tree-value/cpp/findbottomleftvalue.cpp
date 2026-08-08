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
    int findBottomLeftValue(TreeNode *root)
    {
        std::deque<TreeNode *> nodeQueue;
        int res = 0;

        if (root != nullptr)
            nodeQueue.push_back(root);

        while (!nodeQueue.empty())
        {
            int size = nodeQueue.size();

            for (int i = 0; i < size; i++)
            {
                auto curr = nodeQueue.front();
                nodeQueue.pop_front();

                if (i == 0)
                    res = curr->val;

                if (curr->left != nullptr)
                    nodeQueue.push_back(curr->left);

                if (curr->right != nullptr)
                    nodeQueue.push_back(curr->right);
            }
        }

        return res;
    }
};
