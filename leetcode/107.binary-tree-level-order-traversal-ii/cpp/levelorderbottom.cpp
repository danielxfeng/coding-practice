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
    std::vector<std::vector<int>> levelOrderBottom(TreeNode *root)
    {
        std::vector<std::vector<int>> res;
        std::deque<TreeNode *> deque;

        if (root != nullptr)
            deque.push_back(root);

        while (!deque.empty())
        {
            const int size = deque.size();
            std::vector<int> layer(size);

            for (int i = 0; i < size; ++i)
            {
                auto curr = deque.front();
                deque.pop_front();

                layer[i] = curr->val;

                if (curr->left != nullptr)
                    deque.push_back(curr->left);
                if (curr->right != nullptr)
                    deque.push_back(curr->right);
            }

            res.push_back(layer);
        }

        std::reverse(res.begin(), res.end());
        return res;
    }
};
