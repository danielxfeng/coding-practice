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
    std::vector<std::vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        return travelsal(root, targetSum, {}, 0);
    }

private:
    std::vector<std::vector<int>> travelsal(TreeNode *root, int targetSum, std::vector<int> path, int sum)
    {
        if (root == nullptr)
            return {};

        sum += root->val;
        path.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr)
        {
            if (targetSum != sum)
                return {};

            return { path };
        }

        std::vector<std::vector<int>> res;
        auto resLeft = travelsal(root->left, targetSum, path, sum);
        auto resRight = travelsal(root->right, targetSum, path, sum);
        res.insert(res.end(), resLeft.begin(), resLeft.end());
        res.insert(res.end(), resRight.begin(), resRight.end());

        return res;
    }
};
