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
    TreeNode *buildTree(std::vector<int> &inorder, std::vector<int> &postorder)
    {
        if (inorder.empty() || inorder.size() != postorder.size())
            return nullptr;

        auto prev = TreeNode();
        travelsal(inorder, 0, inorder.size(), postorder, 0, postorder.size(), &prev, true);
        return prev.left;
    }

private:
    void travelsal(std::vector<int> &inorder, int inLeft, int inRight, std::vector<int> &postorder, int postLeft, int postRight, TreeNode *prev, bool isLeft)
    {
        if (inLeft >= inRight)
            return;

        auto rootVal = postorder[postRight - 1];
        auto root = new TreeNode(rootVal);

        if (isLeft)
            prev->left = root;
        else
            prev->right = root;

        auto splitIdx = findIdx(inorder, inLeft, inRight, rootVal);
        auto leftLen = splitIdx - inLeft;
        postRight--;

        travelsal(inorder, inLeft, splitIdx, postorder, postLeft, postLeft + leftLen, root, true);
        travelsal(inorder, splitIdx + 1, inRight, postorder, postLeft + leftLen, postRight, root, false);
    }

    int findIdx(std::vector<int> nums, int left, int right, int target)
    {
        auto it = std::find(nums.begin() + left, nums.begin() + right, target);
        return it == nums.begin() + right ? -1 : it - nums.begin();
    }
};
