#include <vector>

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
    TreeNode *sortedArrayToBST(std::vector<int> &nums)
    {
        return traversal(nums, 0, nums.size());
    }

private:
    TreeNode *traversal(std::vector<int> &nums, int left, int right)
    {
        if (left >= right)
            return nullptr;

        auto mid = left + (right - left) / 2;
        auto root = new TreeNode(nums[mid]);

        root->left = traversal(nums, left, mid);
        root->right = traversal(nums, mid + 1, right);

        return root;
    }
};
