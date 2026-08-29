#include <vector>
#include <algorithm>

class Solution
{
public:
    int largestSumAfterKNegations(std::vector<int> &nums, int k)
    {
        std::sort(nums.begin(), nums.end(), [](int a, int b)
                  { return std::abs(b) < std::abs(a); });

        int res = 0;

        for (auto v : nums)
        {
            if (v < 0 && k > 0)
            {
                res += -v;
                k--;
                continue;
            }
            res += v;
        }

        if (k % 2 == 1)
            res -= 2 * std::abs(nums.back());

        return res;
    }
};
