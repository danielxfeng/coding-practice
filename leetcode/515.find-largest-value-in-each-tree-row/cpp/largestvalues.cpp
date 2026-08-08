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
    std::vector<int> largestValues(TreeNode *root)
    {
        std::vector<int> res;
        std::deque<TreeNode *> nodeQueue;

        if (root != nullptr)
            nodeQueue.push_back(root);

        while (!nodeQueue.empty())
        {
            int size = nodeQueue.size();

            int max = 0;
            for (int i = 0; i < size; ++i)
            {
                auto curr = nodeQueue.front();
                nodeQueue.pop_front();

                if (i == 0 || curr->val > max)
                    max = curr->val;

                if (curr->left != nullptr)
                    nodeQueue.push_back(curr->left);

                if (curr->right != nullptr)
                    nodeQueue.push_back(curr->right);
            }

            res.push_back(max);
        }

        return res;
    }
};
