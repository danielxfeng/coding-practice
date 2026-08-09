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
    TreeNode *buildTree(std::vector<int> &preorder, std::vector<int> &inorder)
    {
        if (inorder.empty() || inorder.size() != preorder.size())
            return nullptr;

        return traversal(preorder, 0, preorder.size(), inorder, 0, inorder.size());
    }

private:
    TreeNode *traversal(std::vector<int> &preorder, int preLeft, int preRight, std::vector<int> &inorder, int inLeft, int inRight)
    {
        if (preLeft >= preRight)
            return nullptr;

        auto rootVal = preorder[preLeft];
        auto root = new TreeNode(rootVal);

        auto splitIdx = findIdx(inorder, inLeft, inRight, rootVal);
        auto leftLen = splitIdx - inLeft;

        root->left = traversal(preorder, preLeft + 1, preLeft + 1 + leftLen, inorder, inLeft, splitIdx);
        root->right = traversal(preorder, preLeft + 1 + leftLen, preRight, inorder, splitIdx + 1, inRight);

        return root;
    }

    int findIdx(std::vector<int> nums, int left, int right, int target)
    {
        auto it = std::find(nums.begin() + left, nums.begin() + right, target);
        return it == nums.begin() + right ? -1 : it - nums.begin();
    }
};
