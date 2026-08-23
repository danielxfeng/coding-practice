#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int> &candidates, int target)
    {
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
                continue;

            sum_ += candidates[i];
            path_.push_back(candidates[i]);
            backtrack(candidates, target, i);
            path_.pop_back();
            sum_ -= candidates[i];
        }
    }
};
