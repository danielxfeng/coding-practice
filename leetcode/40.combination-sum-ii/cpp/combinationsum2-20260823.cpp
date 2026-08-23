#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int> &candidates, int target)
    {
        std::sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0);
        return res_;
    }

private:
    std::vector<std::vector<int>> res_{};
    std::vector<int> path_{};
    int sum_{0};

    void backtrack(std::vector<int> &candidates, int target, int start)
    {
        if (sum_ == target)
        {
            res_.push_back(path_);
            return;
        }

        for (auto i = start; i < candidates.size(); i++)
        {
            if (sum_ + candidates[i] > target)
                break;

            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            path_.push_back(candidates[i]);
            sum_ += candidates[i];
            backtrack(candidates, target, i + 1);
            sum_ -= candidates[i];
            path_.pop_back();
        }
    }
};
