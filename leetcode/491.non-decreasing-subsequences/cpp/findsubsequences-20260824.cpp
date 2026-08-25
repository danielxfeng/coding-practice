#include <vector>
#include <unordered_set>

class Solution
{
public:
    std::vector<std::vector<int>> findSubsequences(std::vector<int> &nums)
    {
        backtrack(nums, 0);
        return res_;
    }

private:
    std::vector<std::vector<int>> res_{};
    std::vector<int> path_{};

    void backtrack(std::vector<int> &nums, int start)
    {
        if (path_.size() >= 2)
            res_.push_back(path_);

        std::unordered_set<int> set{};

        for (int i = start; i < nums.size(); i++)
        {
            if (set.find(nums[i]) != set.end())
                continue;

            if (path_.size() > 0 && nums[i] < path_.back())
                continue;

            set.insert(nums[i]);
            path_.push_back(nums[i]);
            backtrack(nums, i + 1);
            path_.pop_back();
        }
    }
};
