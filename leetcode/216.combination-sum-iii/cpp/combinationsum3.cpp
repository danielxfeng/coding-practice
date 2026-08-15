#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> combinationSum3(int k, int n)
    {
        backtrack(k, n, 1);
        return res_;
    }

    void backtrack(int k, int n, int start)
    {
        if (path_.size() == k && sum_ == n)
        {
            res_.push_back(path_);
            return;
        }

        for (int i = start; i <= 9; i++)
        {
            if (sum_ + i > n)
                break;

            path_.push_back(i);
            sum_ += i;
            backtrack(k, n, i + 1);
            sum_ -= i;
            path_.pop_back();
        }
    }

private:
    std::vector<std::vector<int>> res_{};
    std::vector<int> path_{};
    int sum_{};
};
