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
        std::deque<TreeNode *> deque;

        if (root != nullptr)
            deque.push_back(root);

        while (!deque.empty())
        {
            int size = deque.size();

            int max = 0;
            for (int i = 0; i < size; ++i)
            {
                auto curr = deque.front();
                deque.pop_front();

                if (i == 0 || curr->val > max)
                    max = curr->val;

                if (curr->left != nullptr)
                    deque.push_back(curr->left);

                if (curr->right != nullptr)
                    deque.push_back(curr->right);
            }

            res.push_back(max);
        }

        return res;
    }
};
