#include <vector>
#include <unordered_set>

class Solution
{
public:
    std::vector<std::vector<int>> permuteUnique(std::vector<int> &nums)
    {
        backtrack(nums, 0);
        return res_;
    }

private:
    std::vector<std::vector<int>> res_{};

    void backtrack(std::vector<int> &nums, int start)
    {
        if (nums.size() == start)
        {
            res_.push_back(nums);
            return;
        }

        std::unordered_set<int> set;

        for (int i = start; i < nums.size(); i++)
        {
            if (set.find(nums[i]) != set.end())
                continue;
            set.emplace(nums[i]);

            swap(nums, start, i);
            backtrack(nums, start + 1);
            swap(nums, start, i);
        }
    }

    void swap(std::vector<int> &nums, int a, int b)
    {
        auto tmp = nums[a];
        nums[a] = nums[b];
        nums[b] = tmp;
    }
};
