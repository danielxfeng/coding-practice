#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> combine(int n, int k)
    {
        backtrack(n, k, 1); // we start from 1, 1...n
        return res_;
    }

private:
    std::vector<std::vector<int>> res_{};
    std::vector<int> path_{};

    void backtrack(int n, int k, int start)
    {
        // We return when we collect k elements
        if (path_.size() == k)
        {
            res_.push_back(path_);
            return;
        }

        for (auto i = start; i <= n; i++) // the loop
        {
            // prune when we cannot get an useful answer
            // k-path_.size(): how many numbers do we need, n-i+1: how many numbers left
            if (k - path_.size() > n - i + 1)
                break;

            path_.push_back(i);
            backtrack(n, k, i + 1); // the recur, we skip the used number.
            path_.pop_back();
        }
    }
};
