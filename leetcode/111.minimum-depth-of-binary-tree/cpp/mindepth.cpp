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
    int minDepth(TreeNode *root)
    {
        std::deque<TreeNode *> deque;
        int depth = 0;

        if (root != nullptr)
            deque.push_back(root);

        while (!deque.empty())
        {
            int size = deque.size();
            depth++;

            for (int i = 0; i < size; i++)
            {
                auto curr = deque.front();
                deque.pop_front();

                if (curr->left == nullptr && curr->right == nullptr)
                    return depth;

                if (curr->left != nullptr)
                    deque.push_back(curr->left);

                if (curr->right != nullptr)
                    deque.push_back(curr->right);
            }
        }

        return depth;
    }
};
