#include <limits>
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
    int getMinimumDifference(TreeNode *root)
    {
        if (root == nullptr)
            return minDiff;

        getMinimumDifference(root->left);

        if (prev != nullptr)
        {
            auto diff = root->val - prev->val;
            minDiff = std::min(diff, minDiff);
        }

        prev = root;
        getMinimumDifference(root->right);

        return minDiff;
    }

private:
    TreeNode *prev;
    int minDiff{std::numeric_limits<int>::max()};
};