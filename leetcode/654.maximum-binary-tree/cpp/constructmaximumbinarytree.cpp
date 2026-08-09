#include <vector>
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
    TreeNode *constructMaximumBinaryTree(std::vector<int> &nums)
    {
        auto prev = TreeNode();
        traversal(nums, &prev, true, 0, nums.size());
        return prev.left;
    }

private:
    void traversal(std::vector<int> &nums, TreeNode *prev, bool isLeft, int left, int right)
    {
        auto maxIdx = findMaxIdx(nums, left, right);
        if (maxIdx == -1)
            return;

        auto node = new TreeNode(nums[maxIdx]);
        if (isLeft)
            prev->left = node;
        else
            prev->right = node;

        traversal(nums, node, true, left, maxIdx);
        traversal(nums, node, false, maxIdx + 1, right);
    }

    int findMaxIdx(std::vector<int> &nums, int left, int right)
    {
        if (left >= right)
            return -1;

        auto it = std::max_element(nums.begin() + left, nums.begin() + right);
        return it - nums.begin();
    }
};
