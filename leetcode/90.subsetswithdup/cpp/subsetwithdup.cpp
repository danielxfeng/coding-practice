#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> subsetsWithDup(std::vector<int> &nums)
    {
        std::sort(nums.begin(), nums.end());
        backtrack(nums, 0);
        return res_;
    }

private:
    std::vector<std::vector<int>> res_{};
    std::vector<int> path_{};

    void backtrack(std::vector<int> &nums, int start)
    {
        res_.push_back(path_);
        if (path_.size() == nums.size())
            return;

        for (auto i = start; i < nums.size(); i++)
        {
            if (i > start && nums[i] == nums[i - 1])
                continue;

            path_.push_back(nums[i]);
            backtrack(nums, i + 1);
            path_.pop_back();
        }
    }
};
