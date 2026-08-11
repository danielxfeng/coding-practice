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
    std::vector<int> findMode(TreeNode *root)
    {
        if (root == nullptr)
            return res_;

        findMode(root->left);

        if (prev_ == nullptr || prev_->val != root->val)
            currNum_ = 1;
        else
            currNum_++;

        if (currNum_ >= maxNum_)
        {
            if (currNum_ > maxNum_)
            {
                maxNum_ = currNum_;
                res_.clear();
            }

            res_.push_back(root->val);
        }

        prev_ = root;

        findMode(root->right);

        return res_;
    }

private:
    TreeNode *prev_;
    std::vector<int> res_{};
    int maxNum_{0};
    int currNum_{0};
};
