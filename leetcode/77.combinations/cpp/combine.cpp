#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> combine(int n, int k)
    {
        backtrace(n, k, 1);
        return res_;
    }

private:
    std::vector<std::vector<int>> res_{};
    std::vector<int> path_{};

    void backtrace(int n, int k, int s)
    {
        if (path_.size() == k)
        {
            res_.push_back(path_);
            return;
        }

        for (int i = s; i <= n; i++)
        {
            if (n - i + 1 < k - path_.size())
                break;

            path_.push_back(i);
            backtrace(n, k, i + 1);
            path_.pop_back();
        }
    }
};
