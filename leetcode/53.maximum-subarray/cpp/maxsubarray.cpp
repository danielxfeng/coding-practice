#include <vector>

class Solution
{
public:
    int maxSubArray(std::vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;

        int res = nums[0];
        int cur = 0;

        for (auto v : nums)
        {
            cur += v;

            if (cur > res)
                res = cur;

            if (cur < 0)
                cur = 0;
        }

        return res;
    }
};
