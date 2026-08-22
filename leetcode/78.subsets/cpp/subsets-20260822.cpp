#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> subsets(std::vector<int> &nums)
    {
        backtrack(nums, 0);
        return res_;
    }

private:
    std::vector<std::vector<int>> res_{};
    std::vector<int> path_{};

    void backtrack(std::vector<int> &nums, int start)
    {
        res_.push_back(path_);

        for (auto i = start; i < nums.size(); i++)
        {
            path_.push_back(nums[i]);
            backtrack(nums, i + 1);
            path_.pop_back();
        }
    }
};
