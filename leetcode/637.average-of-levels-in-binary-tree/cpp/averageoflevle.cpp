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
    std::vector<double> averageOfLevels(TreeNode *root)
    {
        std::vector<double> res;
        std::deque<TreeNode *> deque;

        if (root != nullptr)
            deque.push_back(root);

        while (!deque.empty())
        {
            auto size = deque.size();
            double subTotal = 0.0;

            for (int i = 0; i < size; ++i)
            {
                auto curr = deque.front();
                deque.pop_front();

                subTotal += curr->val;

                if (curr->left != nullptr)
                    deque.push_back(curr->left);

                if (curr->right != nullptr)
                    deque.push_back(curr->right);
            }
            res.push_back(subTotal / size);
        }

        return res;
    }
};
